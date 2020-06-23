#pragma once

#include <gmock/gmock.h>

#include "ih/pages/gs_iclock_page_view.hpp"

#include "ih/gs_iwidget_object.hpp"
#include "ih/gs_itheme_controller.hpp"

#include <string>

template <typename PageBaseFake >
class FakeBasePage
	:	public PageBaseFake
{

public:

	MOCK_METHOD1(addWidget, void(Graphics::Widgets::IWidgetObject* _pWidget));
	MOCK_CONST_METHOD0(isVisible, bool());

	void reloadStyle() override {}

	void show() override {}
	void hide() override {}

public:

	MOCK_CONST_METHOD0(getPageName, std::string_view());
	MOCK_CONST_METHOD0(getThemeController, const Graphics::Theme::IThemeController* ());

};

class FakeClockPage
	:	public FakeBasePage<Graphics::Views::IClockWatchPage>
{

public:

	FakeClockPage()
		:	m_hoursValue{ "00" }
		,	m_minutesValue{ "00" }
		,	m_secondsValue{ ":00" }
		,	m_weekdayValue{ "........." }
		,	m_fulldateValue{ "../../...." }
	{
	}

public:

	void setHours(const std::string& _newHoursValue) override
	{
		m_hoursValue = _newHoursValue;
	};

	void setMinutes(const std::string& _newMinutesValue) override
	{
		m_minutesValue = _newMinutesValue;
	};

	void setSeconds(const std::string& _newSecondsValue) override
	{
		m_secondsValue = _newSecondsValue;
	};

	void setWeekday(std::string_view _newWeekDay) override
	{
		m_weekdayValue = _newWeekDay;
	};

	void setFullDate(const std::string& _fullDate) override
	{
		m_fulldateValue = _fullDate;
	};

public:

	std::string_view getHours()const
	{
		return m_hoursValue;
	}

	std::string_view getMinutes()const
	{
		return m_minutesValue;
	}

	std::string_view getSeconds()const
	{
		return m_secondsValue;
	}

	std::string_view getWeekday()const
	{
		return m_weekdayValue;
	}

	std::string_view getFullDate()const
	{
		return m_fulldateValue;
	}

private:
	std::string m_hoursValue;
	std::string m_minutesValue;
	std::string m_secondsValue;
	std::string m_weekdayValue;
	std::string m_fulldateValue;
};


class FakeClockPageMock
	:	public FakeBasePage<Graphics::Views::IClockWatchPage>
{

public:
	MOCK_METHOD(void, setHours, (const std::string&), (override));
	MOCK_METHOD(void, setMinutes, (const std::string&), (override));
	MOCK_METHOD(void, setSeconds, (const std::string&), (override));
	MOCK_METHOD(void, setWeekday, (std::string_view), (override));
	MOCK_METHOD(void, setFullDate, (const std::string&), (override));
};