#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "Framework/Commands/UICommandInfo.h"
#include "OptiloggerStyle.h"

class FOptiloggerCommands : public TCommands<FOptiloggerCommands>
{
public:
    FOptiloggerCommands()
        : TCommands<FOptiloggerCommands>(TEXT("OptiLogger"), NSLOCTEXT("Contexts", "OptiLogger", "OptiLogger Plugin"), NAME_None, FOptiloggerStyle::GetStyleSetName())
    {
    }

    virtual void RegisterCommands() override;

public:
    TSharedPtr<FUICommandInfo> OpenPluginWindow;
    
    TSharedPtr<FUICommandInfo> AnalyzeCurrentLevel;

    TSharedPtr<FUICommandInfo> ExportAnalysisReport;

    TSharedPtr<FUICommandInfo> AnalyzeStaticMeshes;

    TSharedPtr<FUICommandInfo> AnalyzeSkeletalMeshes;

    TSharedPtr<FUICommandInfo> AnalyzeTextures;

    TSharedPtr<FUICommandInfo> AnalyzeMaterials;

    TSharedPtr<FUICommandInfo> AnalyzeAnimations;

    TSharedPtr<FUICommandInfo> AnalyzeAudio;

    TSharedPtr<FUICommandInfo> AnalyzeLighting;

    TSharedPtr<FUICommandInfo> AnalyzePostProcess;

    TSharedPtr<FUICommandInfo> ClearResults;

    TSharedPtr<FUICommandInfo> RefreshAnalysis;
};