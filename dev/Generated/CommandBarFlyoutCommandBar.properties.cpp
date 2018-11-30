// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "CommandBarFlyoutCommandBar.h"

CppWinRTActivatableClassWithDPFactory(CommandBarFlyoutCommandBar)

GlobalDependencyProperty CommandBarFlyoutCommandBarProperties::s_FlyoutTemplateSettingsProperty{ nullptr };

CommandBarFlyoutCommandBarProperties::CommandBarFlyoutCommandBarProperties()
{
    EnsureProperties();
}

void CommandBarFlyoutCommandBarProperties::EnsureProperties()
{
    if (!s_FlyoutTemplateSettingsProperty)
    {
        s_FlyoutTemplateSettingsProperty =
            InitializeDependencyProperty(
                L"FlyoutTemplateSettings",
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBar>(),
                false /* isAttached */,
                ValueHelper<winrt::CommandBarFlyoutCommandBarTemplateSettings>::BoxedDefaultValue(),
                nullptr);
    }
}

void CommandBarFlyoutCommandBarProperties::ClearProperties()
{
    s_FlyoutTemplateSettingsProperty = nullptr;
}

void CommandBarFlyoutCommandBarProperties::FlyoutTemplateSettings(winrt::CommandBarFlyoutCommandBarTemplateSettings const& value)
{
    static_cast<CommandBarFlyoutCommandBar*>(this)->SetValue(s_FlyoutTemplateSettingsProperty, ValueHelper<winrt::CommandBarFlyoutCommandBarTemplateSettings>::BoxValueIfNecessary(value));
}

winrt::CommandBarFlyoutCommandBarTemplateSettings CommandBarFlyoutCommandBarProperties::FlyoutTemplateSettings()
{
    return ValueHelper<winrt::CommandBarFlyoutCommandBarTemplateSettings>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBar*>(this)->GetValue(s_FlyoutTemplateSettingsProperty));
}