#include "gs_battery_handler.hpp"

#include "ih/widgets/gs_ibattery_widget.hpp"

#include "ih/gs_events.hpp"
#include "utils/MetaUtils.hpp"
namespace
{
	Graphics::Widgets::IBatteryWidget::BatteryStatus toBatteryStatus( std::uint8_t _batteryValue )
	{
		if( _batteryValue <= 25 )
			return Graphics::Widgets::IBatteryWidget::BatteryStatus::QuaterCharge;
		else if( _batteryValue >25 && _batteryValue <= 50 )
			return Graphics::Widgets::IBatteryWidget::BatteryStatus::HalfCharged;
		else if( _batteryValue > 50 && _batteryValue <= 75 )
			return Graphics::Widgets::IBatteryWidget::BatteryStatus::Charge75Percents;
		else if( _batteryValue > 75 && _batteryValue <= 90 )
			return Graphics::Widgets::IBatteryWidget::BatteryStatus::Charged90Percents;
		else
			return Graphics::Widgets::IBatteryWidget::BatteryStatus::FullCharged;
	}
}

namespace Graphics::Widgets
{

BatteryWidgetHandler::BatteryWidgetHandler( IBatteryWidget* _bateryWidget )
    :   m_pBatteryWidget{ _bateryWidget }
{

}

void BatteryWidgetHandler::handleEvent( const Events::TEvent& _event )
{
	// TODO move this to baseHandler, replace to virtual functions like
	// Handle BatteryEvent, Handle HeartRateEvent
	// Think about metatype resistartion through using std::variant<TEvent1, TEvent2,TEvent...>
	// Or fo instance consider using static visitor idiom for decalring possible visitable types like
	// EventHandlerVisitor<TEvent1,TEvent2,TEvent3>

	Events::TBatteryEvents batEvents = std::any_cast<Events::TBatteryEvents>( _event.eventType );
	Meta::UnuseVar( batEvents );

	std::uint8_t batteryValue = std::any_cast<std::uint8_t>( _event.eventData );

	switch ( _event.eventGroup )
	{
	case Events::EventGroup::Battery:
		if( auto pBatteryWidget = m_pBatteryWidget; pBatteryWidget && pBatteryWidget->isVisible() )
		{
			pBatteryWidget->setBatteryLevelPercentage( batteryValue );
			pBatteryWidget->setBatteryStatus( toBatteryStatus( batteryValue ) );
		}
		break;
	default:
		break;
	}
}

std::unique_ptr<Graphics::IEventHandler>
createBatteryWidgetHandler( IBatteryWidget* _batteryWidget)
{
    return std::make_unique<BatteryWidgetHandler>( _batteryWidget );
}

}
