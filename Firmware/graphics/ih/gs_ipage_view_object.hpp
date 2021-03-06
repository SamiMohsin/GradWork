#pragma once

#include <memory>
#include <string>

namespace Graphics::Widgets
{
    class IWidgetObject;
}

namespace Graphics::Theme
{
    class IThemeController;
}

namespace Graphics::Views
{

class IEventHandler;

class IPageViewObject
{

public:

    virtual ~IPageViewObject() = default;

public:

    virtual void addWidget( Graphics::Widgets::IWidgetObject* _pWidget ) = 0;

    virtual void show() = 0;

    virtual void hide() = 0;

    virtual bool isVisible() const = 0;

    virtual void reloadStyle() = 0;

public:

    virtual std::string_view getPageName() const = 0;

    virtual const Theme::IThemeController* getThemeController() const = 0;
};

};
