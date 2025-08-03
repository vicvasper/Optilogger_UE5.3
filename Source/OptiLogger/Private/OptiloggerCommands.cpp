#include "OptiloggerCommands.h"

#define LOCTEXT_NAMESPACE "FOptiLogger"

void FOptiloggerCommands::RegisterCommands()
{
    UI_COMMAND(OpenPluginWindow, "Optilogger", "Open Optilogger resource analysis window", EUserInterfaceActionType::Button, FInputChord());
    
    UI_COMMAND(AnalyzeCurrentLevel, "Analyze Current Level", "Analyze all resources in the current level", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadOne, EModifierKey::Control));
    
    UI_COMMAND(ExportAnalysisReport, "Export Report", "Export analysis results to JSON file", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadTwo, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeStaticMeshes, "Analyze Static Meshes", "Analyze static mesh resources (vertex count, LODs, memory usage)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadThree, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeSkeletalMeshes, "Analyze Skeletal Meshes", "Analyze skeletal mesh resources (bone count, animations, complexity)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadFour, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeTextures, "Analyze Textures", "Analyze texture resources (resolution, compression, memory usage)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadFive, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeMaterials, "Analyze Materials", "Analyze material resources (shader complexity, texture references)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadSix, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeAnimations, "Analyze Animations", "Analyze animation resources (duration, compression, keyframes)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadSeven, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeAudio, "Analyze Audio", "Analyze audio resources (compression, duration, file size)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadEight, EModifierKey::Control));
    
    UI_COMMAND(AnalyzeLighting, "Analyze Lighting", "Analyze lighting resources (light actors, lightmaps, performance impact)", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadNine, EModifierKey::Control));
    
    UI_COMMAND(AnalyzePostProcess, "Analyze Post-Process", "Analyze post-process effects and their performance impact", EUserInterfaceActionType::Button, FInputChord(EKeys::NumPadZero, EModifierKey::Control));
    
    UI_COMMAND(ClearResults, "Clear Results", "Clear all analysis results", EUserInterfaceActionType::Button, FInputChord(EKeys::Delete, EModifierKey::Control));
    
    UI_COMMAND(RefreshAnalysis, "Refresh Analysis", "Refresh and update current analysis results", EUserInterfaceActionType::Button, FInputChord(EKeys::F5));
}

#undef LOCTEXT_NAMESPACE