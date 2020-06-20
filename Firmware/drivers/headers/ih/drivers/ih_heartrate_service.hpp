#pragma once

#include "utils/Noncopyable.hpp"
#include "utils/TimeWrapper.hpp"
#include "utils/SimpleSignal.hpp"

#include <any>


namespace Ble::HeartrateService
{

enum class SensorLocation
{
        Finger
    ,   Chest
    ,   Hand
}

class IHeartrateService
    :   private Utils::noncopyable
{

public:

    virtual ~IHeartrateService() = default;

public:

    virtual void onHeartrateChanged ( std::uint8_t _newHeartrateLevel ) = 0;

    virtual void setSensorLocation( SensorLocation _sensorLocation ) = 0;

};

}