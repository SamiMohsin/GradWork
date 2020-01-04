#include "lvgl_ui.hpp"
#include "../fonts/RobotoBold40px.hpp"

#include <cstdint>
#include <tuple>
#include <array>
#include <utility>

#include "lvgl.h"

namespace UiConstants::Display
{
    static const std::uint32_t Width = LV_HOR_RES;
    static const std::uint32_t Height = LV_VER_RES;
}

namespace Utils::Meta
{
    template<typename Callable, typename Tuple, std::size_t... Is >
    constexpr auto tupleApplyImpl( Callable&& _toCall, const Tuple& _tuple, std::index_sequence<Is...> )
    {
        return (_toCall( std::get<Is>( _tuple ) ), ...);
    }

    template<typename Callable, typename ... ArgsList >
    constexpr auto tupleApply( Callable&& _toCall , const std::tuple<ArgsList...>& _tuple )
    {
        return tupleApplyImpl( std::forward<Callable>( _toCall ), _tuple, std::index_sequence_for<ArgsList...>{} );
    }
}

namespace
{

auto drawInyan( lv_obj_t* _parent )
{
    auto createAlignedRect = [_parent]( auto _aligmentType, const lv_style_t* _style )
    {
        lv_obj_t* pObject{ nullptr };
        pObject = lv_obj_create( _parent, nullptr );
        lv_obj_set_size(
            pObject
            , UiConstants::Display::Width / 2
            , UiConstants::Display::Height
        );

        lv_obj_set_style( pObject, _style );
        lv_obj_align( pObject, nullptr, _aligmentType, 0, 0 );

        return pObject;
    };

    static lv_style_t pInyStyle;
    static lv_style_t pYanStyle;

    lv_style_copy( &pInyStyle, &lv_style_plain_color );
    pInyStyle.body.main_color = lv_color_make( 0x00,0x00,0x00 );
    pInyStyle.body.grad_color = pInyStyle.body.main_color;

    lv_style_copy(&pYanStyle, &lv_style_plain_color);
    pYanStyle.body.main_color = lv_color_make( 0xFF, 0xFF, 0xFF );
    pYanStyle.body.grad_color = pYanStyle.body.main_color;

    lv_obj_t* pIny = createAlignedRect(LV_ALIGN_IN_RIGHT_MID, &pInyStyle);
    lv_obj_t* pYan = createAlignedRect( LV_ALIGN_IN_LEFT_MID, &pYanStyle );

    auto createAlignedCircle = [ _parent ](auto _aligmentType, const lv_style_t* _style)
    {
        lv_obj_t* pCircle = lv_obj_create( _parent, nullptr );

        lv_obj_set_size(
                pCircle
            ,   UiConstants::Display::Width / 2
            ,   UiConstants::Display::Height / 2
        );

        lv_obj_set_style( pCircle, _style );
        lv_obj_align( pCircle, nullptr, _aligmentType, 0, 0);

        return pCircle;
    };

    static lv_style_t pInyCircleStyle;
    lv_style_copy( &pInyCircleStyle, &lv_style_plain_color );
   
    pInyCircleStyle.body.main_color = lv_color_make(0x00, 0x00, 0x00);
    pInyCircleStyle.body.grad_color = pInyStyle.body.main_color;
    pInyCircleStyle.body.radius = LV_RADIUS_CIRCLE;

    static lv_style_t pYanCircleStyle;

    lv_style_copy( &pYanCircleStyle, &pInyCircleStyle );
    pYanCircleStyle.body.main_color = lv_color_make(0xFF, 0xFF, 0xFF);
    pYanCircleStyle.body.grad_color = pYanCircleStyle.body.main_color;

    lv_obj_t* pInyCircle = createAlignedCircle( LV_ALIGN_IN_BOTTOM_MID, &pInyCircleStyle );
    lv_obj_t* pYanCircle = createAlignedCircle( LV_ALIGN_IN_TOP_MID, &pYanCircleStyle );

    return std::tuple( pIny, pInyCircle, pYan, pYanCircle );
}

auto drawClocks( lv_obj_t* _parent )
{
    static lv_style_t hoursLabelStyle;
    lv_style_copy( &hoursLabelStyle, &lv_style_plain_color );

    lv_obj_t* pHoursLabel = lv_label_create( _parent, nullptr );
    hoursLabelStyle.text.font = &RobotoFont40px;
    hoursLabelStyle.text.color = lv_color_make( 0x00, 0x00, 0x00 );

    lv_label_set_style( pHoursLabel, LV_LABEL_STYLE_MAIN, &hoursLabelStyle );
    lv_obj_align(
            pHoursLabel
        ,   nullptr
        ,   LV_ALIGN_IN_TOP_MID
        ,   0
        ,   static_cast<lv_coord_t>( UiConstants::Display::Height / 3.25f )
    );

    lv_label_set_text( pHoursLabel, "11" );


    static lv_style_t minutesLabelStyle;
    lv_obj_t* pMinutesLabel = lv_label_create( _parent, nullptr );

    lv_style_copy( &minutesLabelStyle, &lv_style_plain_color );
    minutesLabelStyle.text.font = &RobotoFont40px;
    minutesLabelStyle.text.color = lv_color_make(0xFF, 0xFF, 0xFF);

    lv_label_set_style( pMinutesLabel, LV_LABEL_STYLE_MAIN, &minutesLabelStyle );
    lv_obj_align(
            pMinutesLabel
        ,   nullptr
        ,   LV_ALIGN_CENTER
        ,   0
        ,   UiConstants::Display::Height / 8
    );

    lv_label_set_text( pMinutesLabel, "27" );


    static lv_style_t secondsLabelStyle;
    lv_obj_t* pSecondsLabel = lv_label_create( _parent, nullptr );

    lv_style_copy( &secondsLabelStyle, &minutesLabelStyle );
    secondsLabelStyle.text.font = &lv_font_roboto_16;

    lv_label_set_style( pSecondsLabel, LV_LABEL_STYLE_MAIN, &secondsLabelStyle );
    lv_obj_align(
            pSecondsLabel
        ,   nullptr
        ,   LV_ALIGN_IN_TOP_RIGHT
        ,   0
        ,   UiConstants::Display::Height / 3 + UiConstants::Display::Height / 24
    );

    lv_label_set_text( pSecondsLabel, "27" );

    return std::tuple( pHoursLabel, pMinutesLabel, pSecondsLabel );
}

}

namespace LvglUi
{

void createWidgetsDemo()
{

    //lv_theme_t* pTheme = lv_theme_mono_init(0, nullptr);
    lv_theme_t* pTheme = lv_theme_material_init( 0, nullptr );
    lv_theme_set_current( pTheme );

    static std::array<lv_point_t, 3> validPos
        = {
                lv_point_t{ 0, 0 }
            ,   lv_point_t{ 0, 1 }
            ,   lv_point_t{ 1, 1 }
        };

    lv_obj_t* pTileView;
    pTileView = lv_tileview_create( lv_scr_act(), nullptr );
    lv_tileview_set_valid_positions(
            pTileView
        ,   validPos.data()
        ,   static_cast<std::uint16_t>( validPos.size() )
    );

    lv_tileview_set_edge_flash( pTileView, false );

    lv_obj_t* tileClock = lv_obj_create( pTileView, nullptr );
    lv_obj_set_size( tileClock, LV_HOR_RES, LV_VER_RES );
    lv_obj_set_style( tileClock, &lv_style_plain );

    /*Clock Tile: just labels*/
    auto iniYan = drawInyan( tileClock );
    auto clocks = drawClocks( tileClock );
    auto clockTileWidgets = std::tuple_cat( iniYan, clocks );
    lv_tileview_add_element( pTileView, tileClock );

    Utils::Meta::tupleApply(
            [&pTileView]( lv_obj_t* _pClockWidget )
            {
                lv_tileview_add_element( pTileView , _pClockWidget );
            }
        ,   clockTileWidgets
    );

    /*Tile2: a back menu*/
    lv_obj_t* tileOptions = lv_obj_create( pTileView, nullptr );
    lv_obj_set_size( tileOptions, LV_HOR_RES, LV_VER_RES );
    lv_obj_set_style( tileOptions, &lv_style_plain );
    lv_obj_set_pos(tileOptions, 0, LV_VER_RES);
    lv_tileview_add_element(pTileView, tileOptions);

    auto iniYanReversed = drawInyan( tileOptions );

    Utils::Meta::tupleApply(
            [&pTileView]( lv_obj_t* _pOptionsWidget )
            {
                lv_tileview_add_element( pTileView, _pOptionsWidget );
            }
        ,   iniYanReversed
    );
}

}