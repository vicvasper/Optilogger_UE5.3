#include "OptiloggerStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FOptiloggerStyle::StyleInstance = nullptr;

void FOptiloggerStyle::Initialize()
{
    if (!StyleInstance.IsValid())
    {
        StyleInstance = Create();
        FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
    }
}

void FOptiloggerStyle::Shutdown()
{
    FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
    ensure(StyleInstance.IsUnique());
    StyleInstance.Reset();
}

FName FOptiloggerStyle::GetStyleSetName()
{
    static FName StyleSetName(TEXT("OptiloggerStyle"));
    return StyleSetName;
}

const ISlateStyle& FOptiloggerStyle::Get()
{
    return *StyleInstance;
}

void FOptiloggerStyle::ReloadTextures()
{
    if (FSlateApplication::IsInitialized())
    {
        FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
    }
}

TSharedRef<FSlateStyleSet> FOptiloggerStyle::Create()
{
    TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("OptiloggerStyle"));
    if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin("OptiLogger"))

    // Define icon sizes
    const FVector2D Icon16x16(16.0f, 16.0f);
    const FVector2D Icon20x20(20.0f, 20.0f);
    const FVector2D Icon40x40(40.0f, 40.0f);

    // Set default icon for plugin commands (using engine's default icons as fallback)
    Style->Set("Optilogger.OpenPluginWindow", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/StaticMesh"), Icon40x40));
    Style->Set("Optilogger.OpenPluginWindow.Small", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/StaticMesh"), Icon20x20));

    // Analysis command icons
    Style->Set("Optilogger.AnalyzeCurrentLevel", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Level"), Icon20x20));
    Style->Set("Optilogger.ExportAnalysisReport", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/SaveAs"), Icon20x20));
    Style->Set("Optilogger.AnalyzeStaticMeshes", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/StaticMesh"), Icon20x20));
    Style->Set("Optilogger.AnalyzeSkeletalMeshes", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/SkeletalMesh"), Icon20x20));
    Style->Set("Optilogger.AnalyzeTextures", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Texture"), Icon20x20));
    Style->Set("Optilogger.AnalyzeMaterials", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Material"), Icon20x20));
    Style->Set("Optilogger.AnalyzeAnimations", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Animation"), Icon20x20));
    Style->Set("Optilogger.AnalyzeAudio", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Sound"), Icon20x20));
    Style->Set("Optilogger.AnalyzeLighting", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Light"), Icon20x20));
    Style->Set("Optilogger.AnalyzePostProcess", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/PostProcess"), Icon20x20));
    Style->Set("Optilogger.ClearResults", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Delete"), Icon20x20));
    Style->Set("Optilogger.RefreshAnalysis", new IMAGE_BRUSH_SVG(TEXT("Starship/Common/Refresh"), Icon20x20));

    // Define text styles for the plugin UI
    Style->Set("Optilogger.Heading", FTextBlockStyle()
        .SetFont(FCoreStyle::GetDefaultFontStyle("Bold", 14))
        .SetColorAndOpacity(FLinearColor::White)
    );

    Style->Set("Optilogger.SubHeading", FTextBlockStyle()
        .SetFont(FCoreStyle::GetDefaultFontStyle("Regular", 12))
        .SetColorAndOpacity(FLinearColor(0.8f, 0.8f, 0.8f))
    );

    Style->Set("Optilogger.NormalText", FTextBlockStyle()
        .SetFont(FCoreStyle::GetDefaultFontStyle("Regular", 10))
        .SetColorAndOpacity(FLinearColor(0.9f, 0.9f, 0.9f))
    );

    Style->Set("Optilogger.WarningText", FTextBlockStyle()
        .SetFont(FCoreStyle::GetDefaultFontStyle("Regular", 10))
        .SetColorAndOpacity(FLinearColor(1.0f, 0.8f, 0.0f))
    );

    Style->Set("Optilogger.ErrorText", FTextBlockStyle()
        .SetFont(FCoreStyle::GetDefaultFontStyle("Regular", 10))
        .SetColorAndOpacity(FLinearColor(1.0f, 0.3f, 0.3f))
    );

    // Define button styles
    Style->Set("Optilogger.Button", FButtonStyle()
        .SetNormal(BOX_BRUSH("Common/Button", FVector2D(32, 32), 8.0f / 32.0f))
        .SetHovered(BOX_BRUSH("Common/Button_Hovered", FVector2D(32, 32), 8.0f / 32.0f))
        .SetPressed(BOX_BRUSH("Common/Button_Pressed", FVector2D(32, 32), 8.0f / 32.0f))
        .SetNormalPadding(FMargin(2, 2, 2, 2))
        .SetPressedPadding(FMargin(2, 3, 2, 1))
    );

    return Style;
}

#undef RootToContentDir