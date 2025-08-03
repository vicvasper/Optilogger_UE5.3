#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "InputCoreTypes.h"
#include "OptiloggerSubsystem.generated.h"

class UResourceAnalyzer;
struct FKey;

UCLASS()
class UOptiloggerSubsystem : public UEditorSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    void TriggerAnalysis(const FString& AnalysisType);
    bool ExportCurrentAnalysis();
    void DisplayAnalysisResults();
    void HideAnalysisResults();
    void ToggleAnalysisDisplay();
    FString GetAnalysisSummary() const;

    FString LastAnalysisType;
    FDateTime LastAnalysisTime;

    UResourceAnalyzer* GetResourceAnalyzer() const { return ResourceAnalyzer; }

    bool IsFilterByVisible() const { return bFilterByVisible; }
    void SetFilterByVisible(bool bVisible);

    FString GetLastAnalysisType() const { return LastAnalysisType; }

private:
    
    UPROPERTY()
    TObjectPtr<UResourceAnalyzer> ResourceAnalyzer;

    bool bInputHandlingEnabled = false;
    bool bAnalysisDisplayVisible = false;
    bool bAnalysisInProgress = false;
    double DisplayUpdateTime = 0.0;
    FString CurrentDisplayText;
    FDelegateHandle KeyDownDelegateHandle;
    FDelegateHandle KeyUpDelegateHandle;
    TMap<FKey, FString> KeyMappings;

    bool bFilterByVisible = false;

    void SetupInputHandling();
    void CleanupInputHandling();
    void HandleKeyPress(const FKeyEvent& KeyEvent);
    void HandleKeyRelease(const FKeyEvent& KeyEvent);
    void ProcessInputCommand(const FKey& Key);

    void OnAnalyzeCurrentLevel();
    void OnExportAnalysisReport();
    void OnAnalyzeStaticMeshes();
    void OnAnalyzeSkeletalMeshes();
    void OnAnalyzeTextures();
    void OnAnalyzeMaterials();
    void OnAnalyzeAnimations();
    void OnAnalyzeAudio();
    void OnAnalyzeLighting();
    void OnAnalyzePostProcess();
    void OnClearResults();
    void OnRefreshAnalysis();
    void OnToggleDisplay();

    void ShowOnScreenMessage(const FString& Message, float Duration = 2.0f);
    void UpdateAnalysisDisplay();
    FString FormatAnalysisData() const;
};