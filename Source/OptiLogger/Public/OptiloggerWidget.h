#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "Styling/SlateTypes.h"
#include "ResourceAnalyzer.h"
#include "OptiloggerSubsystem.h"

class STextBlock;
class UOptiloggerSubsystem;
class UResourceAnalyzer;
class ITableRow;
class STableViewBase;

struct FAnalysisResultItem
{
    FString Name;
    FString Type;
    FString Details;
    float MemoryUsageMB;
    FLinearColor StatusColor;

    FAnalysisResultItem(const FString& InName, const FString& InType, const FString& InDetails, float InMemoryUsageMB, const FLinearColor& InStatusColor)
        : Name(InName), Type(InType), Details(InDetails), MemoryUsageMB(InMemoryUsageMB), StatusColor(InStatusColor) {}
};

class SOptiloggerWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SOptiloggerWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    virtual ~SOptiloggerWidget();

    virtual TSharedRef<ITableRow> OnGenerateRowForAnalysisResult(
        TSharedPtr<FAnalysisResultItem> Item,
        const TSharedRef<STableViewBase>& OwnerTable);
    virtual TSharedRef<SWidget> OnGenerateWidgetForColumn(
        TSharedPtr<FAnalysisResultItem> Item,
        const FName& ColumnId) const;

    void RefreshDisplay();
    void TriggerAnalysisAndRefreshUI(const FString& AnalysisType);

private:
    TSharedRef<SWidget> CreateToolbar();
    TSharedRef<SWidget> CreateSummaryPanel();
    TSharedRef<SWidget> CreateControlsPanel();
    TSharedRef<SWidget> CreateAnalysisResultsPanel();

    FReply OnAnalyzeCurrentLevelClicked();
    FReply OnAnalyzeStaticMeshesClicked();
    FReply OnAnalyzeSkeletalMeshesClicked();
    FReply OnAnalyzeTexturesClicked();
    FReply OnAnalyzeMaterialsClicked();
    FReply OnAnalyzeAnimationsClicked();
    FReply OnAnalyzeAudioClicked();
    FReply OnAnalyzeLightingClicked();
    FReply OnAnalyzePostProcessClicked();
    FReply OnExportReportClicked();
    FReply OnClearResultsClicked();
    FReply OnRefreshClicked();

    ECheckBoxState IsFilterChecked() const;
    void OnFilterChanged(ECheckBoxState NewState);

    void PopulateAnalysisResults();
    UOptiloggerSubsystem* GetOptiloggerSubsystem() const;
    UResourceAnalyzer* GetResourceAnalyzer() const;
    bool IsAnalyzerAvailable() const;
    
    FText GetAnalysisSummaryText() const;
    FLinearColor GetMemoryUsageColor(float MemoryUsageMB) const;
    FString FormatMemorySize(float MemoryMB) const;

    void OnAnalysisComplete();

private:

    UOptiloggerSubsystem* OptiloggerSubsystem;
    TSharedPtr<SListView<TSharedPtr<FAnalysisResultItem>>> AnalysisResultsListView;
    TSharedPtr<STextBlock> SummaryTextBlock;
    TSharedPtr<STextBlock> StatusTextBlock;

    TArray<TSharedPtr<FAnalysisResultItem>> AnalysisResultItems;

    FSlateFontInfo HeaderFont;
    FSlateFontInfo NormalFont;
    FSlateFontInfo SmallFont;
    FLinearColor HeaderColor;
    FLinearColor NormalTextColor;
    FLinearColor WarningColor;
    FLinearColor ErrorColor;
    FLinearColor SuccessColor;
};

class SAnalysisResultRow
  : public SMultiColumnTableRow<TSharedPtr<FAnalysisResultItem>>
{
public:
    SLATE_BEGIN_ARGS(SAnalysisResultRow) {}
    SLATE_ARGUMENT(TSharedPtr<FAnalysisResultItem>, Item)
    SLATE_ARGUMENT(SOptiloggerWidget*, OwnerWidget)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& OwnerTable)
    {
        MyItem = InArgs._Item;
        Owner   = InArgs._OwnerWidget;
        SMultiColumnTableRow<TSharedPtr<FAnalysisResultItem>>::Construct(
            FTableRowArgs(), OwnerTable);
    }

    virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnName) override
    {
        return Owner->OnGenerateWidgetForColumn(MyItem, ColumnName);
    }

private:
    TSharedPtr<FAnalysisResultItem> MyItem;
    SOptiloggerWidget*              Owner;
};