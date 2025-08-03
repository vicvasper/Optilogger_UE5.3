#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Engine/Engine.h"
#include "Framework/Commands/Commands.h"
#include "Framework/Commands/UICommandList.h"
#include "Widgets/SWidget.h"
#include "OptiloggerCommands.h"

class SWidget;
class FToolBarBuilder;
class FMenuBuilder;
class UOptiloggerSubsystem;

class FOptiLogger : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    
    void PluginButtonClicked();
    
    static inline FOptiLogger& Get()
    {
        return FModuleManager::LoadModuleChecked<FOptiLogger>("OptiLogger");
    }
    
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("OptiLogger");
    }

private:
    void RegisterMenus();
    void AddToolbarExtension(FToolBarBuilder& Builder);
    void AddMenuExtension(FMenuBuilder& Builder);

    TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
    TSharedPtr<class FUICommandList> PluginCommands;
    TSharedPtr<SWidget> OptiloggerWidget;
};
