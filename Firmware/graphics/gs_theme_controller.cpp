#include "gs_theme_controller.hpp"

namespace
{

    namespace ThemeDark
    {
        static const lv_color_t MainDarkColor = lv_color_make(0x00, 0x33, 0x33);
        static const lv_color_t MainLightColor = lv_color_make(0x99, 0xCC, 0xCC);
    }

    namespace ThemeLight
    {
        static const lv_color_t MainDarkColor = lv_color_make(0x00, 0x00, 0x00);
        static const lv_color_t MainLightColor = lv_color_make(0xFF, 0xFF, 0xFF);
    }

    namespace ThemePastele
    {
        static const lv_color_t MainDarkColor = lv_color_make(0x00, 0x00, 0x00);
        static const lv_color_t MainLightColor = lv_color_make(0xCC, 0xCC, 0xCC);
    }

}

namespace Graphics::Theme
{

lv_color_t
ThemeController::getMainThemeColor( Color _fromColor ) const
{
    switch (_fromColor)
    {
    case Graphics::Theme::Color::MainThemeLight:
            return m_mainThemeLightColor;
        break;
    case Graphics::Theme::Color::MainThemeDark:
            return m_mainThemeDarkColor;
        break;
    default:
        break;
    }
    return m_mainThemeDarkColor;
}

std::uint32_t ThemeController::getDisplayWidth() const
{
    return m_displayWidth;
}

std::uint32_t ThemeController::getDisplayHeight() const
{
    return m_displayHeight;
}

ThemeController::ThemeController(
            const ColorTheme _initialColorTheme
        ,   std::uint32_t _displayWidth
        ,   std::uint32_t _displayHeight
    )
    :   m_activeTheme{ _initialColorTheme }
    ,   m_displayWidth{ _displayWidth }
    ,   m_displayHeight{ _displayHeight }
{
    initColorsAccrodingToTheme( m_activeTheme );
}

void
ThemeController::setActiveTheme( ColorTheme _themeToSet )
{
    if( m_activeTheme != _themeToSet )
    {
        m_activeTheme = _themeToSet;

        initColorsAccrodingToTheme( m_activeTheme );

        onThemeChanged.emit();
    }
}
ColorTheme ThemeController::getActiveTheme() const
{
    return m_activeTheme;
}
;

lv_style_t
ThemeController::getIconsFont(FontSize _fontStyle, Color _fontColor ) const
{
    lv_style_t iconsFont{};
    //lv_style_copy( &iconsFont,&lv_style_plain);

    switch (_fontStyle)
    {
    case Graphics::Theme::FontSize::small:
        lv_style_set_text_font(&iconsFont, LV_STATE_DEFAULT, &IconFont16px);
        break;
    case Graphics::Theme::FontSize::below_normal:
        lv_style_set_text_font(&iconsFont, LV_STATE_DEFAULT, &IconFont24px);
        break;
    case Graphics::Theme::FontSize::normal:
        lv_style_set_text_font(&iconsFont, LV_STATE_DEFAULT, &IconFont35px);
        break;
    case Graphics::Theme::FontSize::large:
        lv_style_set_text_font(&iconsFont, LV_STATE_DEFAULT, &PlayerIcons68px);
        break;
    default:
        assert(false);
    }
    lv_style_set_text_color(&iconsFont, LV_STATE_DEFAULT, getMainThemeColor( _fontColor ) );

    return  iconsFont;
};

lv_style_t
ThemeController::getFontStyle( FontSize _fontStyle, Color _fontColor ) const
{
    lv_style_t fontStyle{};
    //lv_style_copy( &fontStyle, &lv_style_plain_color );

    switch (_fontStyle)
    {
    case Graphics::Theme::FontSize::extra_small:
        lv_style_set_text_font(&fontStyle, LV_STATE_DEFAULT, &LcdNova12px);
        break;
    case Graphics::Theme::FontSize::small:
        lv_style_set_text_font(&fontStyle, LV_STATE_DEFAULT, &LcdNova16px);
        break;
    case Graphics::Theme::FontSize::below_normal:
        lv_style_set_text_font(&fontStyle, LV_STATE_DEFAULT, &LcdNova24px);
        break;
    case Graphics::Theme::FontSize::normal:
        lv_style_set_text_font(&fontStyle, LV_STATE_DEFAULT, &LcdNova30px);
        break;
    case Graphics::Theme::FontSize::large:
        lv_style_set_text_font(&fontStyle, LV_STATE_DEFAULT, &LcdNova36px);
        break;
    case Graphics::Theme::FontSize::x_large:
        lv_style_set_text_font(&fontStyle, LV_STATE_DEFAULT, &LcdNova68px);
        break;
    default:
        assert(false);
        break;
    }

    lv_style_set_text_color(&fontStyle, LV_STATE_DEFAULT, getMainThemeColor(_fontColor));

    return fontStyle;
}


void ThemeController::initColorsAccrodingToTheme(ColorTheme _theme)
{
    switch (_theme)
    {
    case Graphics::Theme::ColorTheme::Night:
        m_mainThemeDarkColor = ThemeDark::MainDarkColor;
        m_mainThemeLightColor = ThemeDark::MainLightColor;
        break;
    case Graphics::Theme::ColorTheme::Light:
        m_mainThemeDarkColor = ThemeLight::MainDarkColor;
        m_mainThemeLightColor = ThemeLight::MainLightColor;
        break;
    case Graphics::Theme::ColorTheme::Pastele:
        m_mainThemeDarkColor = ThemePastele::MainDarkColor;
        m_mainThemeLightColor = ThemePastele::MainLightColor;
        break;
    default:
        break;
    }
}


std::unique_ptr<IThemeController>
createThemeController(
        const ColorTheme _initialColorTheme
    ,   std::uint32_t _displayWidth
    ,   std::uint32_t _displayHeight
)
{
    return std::make_unique<ThemeController>(
            _initialColorTheme
        ,   _displayWidth
        ,   _displayHeight
    );
}

}