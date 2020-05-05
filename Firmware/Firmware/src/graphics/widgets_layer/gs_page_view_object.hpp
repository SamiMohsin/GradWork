#pragma once

#include "ih/gs_ipage_view_object.hpp"

#include <vector>
#include <etl/vector.h>

#include <functional>
#include <lvgl.h>

namespace Graphics::Events
{
    struct TEvent;
}

namespace Graphics::Views
{

template< typename ConcretePageView >
class PageViewObject
    :   public ConcretePageView
{

public:

    explicit PageViewObject(
            const Theme::IThemeController* _themeController
        ,   std::string_view _pageName
    );

    ~PageViewObject()override = default;

public:

    void addWidget( Graphics::Widgets::IWidgetObject* _pWidget ) override;

    void show() override;

    void hide() override;

    void reloadStyle() override;

public:

    std::string_view getPageName() const override;

    bool isVisible()const override;

    const Theme::IThemeController* getThemeController() const override;

protected:

    virtual void resetStyle() = 0;

    virtual void initStyles() = 0;

    virtual void initPageWidgets(
            lv_obj_t* _parent
        ,   const std::uint32_t _displayWidth
        ,   const std::uint32_t _displayHeight
    ) = 0;

    virtual void unloadWidgets() = 0;

private:

    void executeForEachWidget(  std::function<void(Graphics::Widgets::IWidgetObject*)> _toCall );

    static constexpr int WidgetsQuantity = 3;
    using TWidgetsStorage = etl::vector<Graphics::Widgets::IWidgetObject*,WidgetsQuantity>;
    TWidgetsStorage m_pWidgetsStorage;

private:

    bool m_isPageVisible;
    std::string_view m_pageName;
    const Theme::IThemeController* m_pThemeController;
};

};
