#include "gs_clock_page_handler.hpp"

#include "ih/gs_events.hpp"
#include "ih/pages/gs_iclock_page_view.hpp"

#include "utils/MetaUtils.hpp"

#include <charconv>

namespace Graphics::Views
{

ClockPageHandler::ClockPageHandler( IClockWatchPage* _clockPageView )
    :   forceUpdateAfterVisibilityChange{false}
    ,   m_pClockWatchView{ _clockPageView }
    ,   m_lastReceivedTime{ std::tm{} }
{
}

void ClockPageHandler::handleEvent( const Events::TEvent& _event )
{
// TODO move this to baseHandler, replace to virtual functions like
// Handle BatteryEvent, Handle HeartRateEvent
// Think about metatype resistartion through using std::variant<TEvent1, TEvent2,TEvent...>
// Or fo instance consider using static visitor idiom for decalring possible visitable types like
// EventHandlerVisitor<TEvent1,TEvent2,TEvent3>

	Events::TDateTimeEvents dateTimeEvents { std::any_cast<Events::TDateTimeEvents>( _event.eventType ) };
	TimeWrapper newDateTime { std::any_cast<TimeWrapper>( _event.eventData ) };

	Meta::UnuseVar( dateTimeEvents );

	auto pClockView { m_pClockWatchView };
	if (!pClockView)
		return;

	if (!pClockView->isVisible())
	{
		forceUpdateAfterVisibilityChange = true;
		return;
	}

	if( newDateTime.getSeconds() != m_lastReceivedTime.getSeconds() || forceUpdateAfterVisibilityChange)
		pClockView->setSeconds(
			formatDoubleDigitsNumber(
					static_cast<std::uint8_t>( newDateTime.getSeconds().count() )
				)
		);

	if( newDateTime.getMinutes() != m_lastReceivedTime.getMinutes() || forceUpdateAfterVisibilityChange)
		pClockView->setMinutes(
			formatDoubleDigitsNumber(
				static_cast<std::uint8_t>( newDateTime.getMinutes().count() )
			)
		);

	if( newDateTime.getHours() != m_lastReceivedTime.getHours() || forceUpdateAfterVisibilityChange)
		pClockView->setHours(
			formatDoubleDigitsNumber(
				static_cast<std::uint8_t>( newDateTime.getHours().count() )
			)
		);

	bool bApplyNewDate{ shouldApplyNewDate( newDateTime ) || forceUpdateAfterVisibilityChange };

	forceUpdateAfterVisibilityChange = false;

	m_lastReceivedTime = newDateTime;

	pClockView->setWeekday( m_lastReceivedTime.getWeekDayString() );

	m_fullDateString = ClockPageHandler::formatToFullDate( m_lastReceivedTime );
	pClockView->setFullDate( m_fullDateString );

}

bool ClockPageHandler::shouldApplyNewDate(const TimeWrapper& _toCheck)
{
	return	_toCheck.getWeekday() != m_lastReceivedTime.getWeekday()
		|| _toCheck.getMonthDay() != m_lastReceivedTime.getMonthDay()
		||	_toCheck.getYear() != m_lastReceivedTime.getYear();
}

std::string
Graphics::Views::ClockPageHandler::formatToFullDate( const TimeWrapper& _toFormat )
{
    constexpr std::uint8_t arraySize = 5;
    std::array<char, arraySize> tempStr{};

	auto fastConvert = [&tempStr]( std::uint16_t _value )
	{
		auto [p, ec] = std::to_chars(
            	tempStr.data()
        	,   tempStr.data() + tempStr.size()
        	,   _value
    	);

		return std::string_view( tempStr.data(), p - tempStr.data() );
	};

	std::string toReturn{ _toFormat.getMonthString() };
	toReturn += '/';
	toReturn += fastConvert( _toFormat.getMonthDay() );
	toReturn += '/';
	toReturn += fastConvert( _toFormat.getYear() );

	return toReturn;
}

std::string ClockPageHandler::formatDoubleDigitsNumber(std::uint8_t _toFormat)
{
	constexpr std::uint8_t arraySize = 4;
    std::array<char, arraySize> tempStr{};

    auto [p, ec] = std::to_chars(
            tempStr.data()
        ,   tempStr.data() + tempStr.size()
        ,   _toFormat
    );

    auto digits = std::string_view( tempStr.data(), p - tempStr.data() );

	if( _toFormat < 10 )
		return "0" + std::string( digits.data() );
	return std::string( digits.data() );
}

std::unique_ptr<Graphics::IEventHandler>
createPageWatchHandler( IClockWatchPage* _clockPage )
{
	return std::make_unique<ClockPageHandler>( _clockPage );
}
}
