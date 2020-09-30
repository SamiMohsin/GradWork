#pragma once

#include <memory>
#include <atomic>
#include <coroutine>

#include <etl/vector.h>

namespace Interface::Spi
{

namespace SpiInstance
{
    struct M1;
    struct M2;
};

class SpiBusAsync
{

public:

    explicit SpiBusAsync(
            std::uint8_t _clockPin
        ,   std::uint8_t _misoPin
        ,   std::uint8_t _mosiPin
        ,   std::uint8_t _chipSelectPin
        ,   std::uint32_t _pRegister
        ,   std::uint8_t _driverInstance
    );

    ~SpiBusAsync();

public:

    static constexpr std::uint16_t DmaBufferSize = 255;
    using DmaBufferType = etl::vector<std::uint8_t,DmaBufferSize>;

    constexpr std::uint16_t getDmaBufferSize() noexcept
    {
        return DmaBufferSize;
    }

    void transmitBuffer(
            std::uint8_t* _pBuffer
        ,   std::uint16_t _pBufferSize
        ,   void* _pUserData
    );

    void transmitCompleted();

private:
    std::uint32_t getTransitionOffset() noexcept;

private:
    class SpiAsyncBackendImpl;
    std::unique_ptr<SpiAsyncBackendImpl> m_pSpiBackendImpl;

    size_t m_fullDmaTransactionsCount = 0;
    size_t m_chunkedTransactionsCount = 0;
    size_t m_completedTransactionsCount = 0;

    DmaBufferType DmaArrayTransmit;
    DmaBufferType DmaArrayReceive;
};

template< typename TSpiInstance >
std::unique_ptr<SpiBusAsync> createSpiBusAsync();


} // namespace Interface::Spi