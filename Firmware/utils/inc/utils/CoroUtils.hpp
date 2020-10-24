#pragma once
#ifdef WIN32
#include <experimental/coroutine>
namespace stdcoro = std::experimental;
#else
#include <coroutine>
namespace stdcoro = std;
#endif // WIN32

#include "MetaUtils.hpp"
#include <atomic>

template <typename... Args>
struct stdcoro::coroutine_traits<void, Args...> {
    struct promise_type {
        void get_return_object() {}
        stdcoro::suspend_never initial_suspend() { return {}; }
        stdcoro::suspend_never final_suspend()noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };
};


namespace CoroUtils
{

struct WhenAllReadyCounter
{
    WhenAllReadyCounter(size_t _countTo)
        :   m_whenAllCounter{ _countTo +1}
        ,   m_suspendedCoroutine{nullptr}
    {
    }

    void setCoroutineForWaiting( stdcoro::coroutine_handle<> _awaitingCoroutine )noexcept
    {
        m_suspendedCoroutine = _awaitingCoroutine;
    }

    void notifyAwaitingCompleted()noexcept
    {
        if( m_whenAllCounter.fetch_sub(1,std::memory_order_acq_rel) == 1)
        {
            m_suspendedCoroutine.resume();
        }
    }

    stdcoro::coroutine_handle<> m_suspendedCoroutine;
    std::atomic<size_t> m_whenAllCounter;
};

template<typename ...Awaitables>
auto when_all(Awaitables&&... _awaitablesList)
{
	struct WhenAllAwaitable
	{
        std::tuple<Awaitables...> m_taskList;
        WhenAllReadyCounter m_whenAllCounter;

        bool await_ready() const noexcept
        {
            return false;
        }
        std::tuple<Awaitables...>& await_resume()noexcept
        {
            return m_taskList;
        }

        void await_suspend(stdcoro::coroutine_handle<> thisCoroutine) noexcept
        {
            m_whenAllCounter.setCoroutineForWaiting(thisCoroutine);

            std::apply(
                    [this](const auto&... _taskList)
                    {
                        return makeCountedSequence(m_whenAllCounter, _taskList...);
                    }
                ,   m_taskList
            );
        }
	};

	return WhenAllAwaitable{
		    std::forward_as_tuple(_awaitablesList...)
        ,   sizeof...(_awaitablesList)
	};
}

template<typename... Tasks>
void makeTaskSequence(Tasks&&... tasks)
{
    (co_await std::forward<Tasks>(tasks), ...);
}

template<typename... Tasks>
void makeCountedSequence(WhenAllReadyCounter& _counter, Tasks&&... tasks)
{
    auto helper = [&_counter](auto&& _task)
        ->  void
    {
        co_await _task;
        _counter.notifyAwaitingCompleted();
    };

    (helper(tasks), ...);
}

}