#pragma once
#include "CoreMinimal.h"
#include "EdGraphSchemaAction.generated.h"

USTRUCT()
struct ENGINE_API FEdGraphSchemaAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FText MenuDescription;
    
    UPROPERTY()
    FText TooltipDescription;
    
    UPROPERTY()
    FText Category;
    
    UPROPERTY()
    FText Keywords;
    
public:
    UPROPERTY()
    int32 Grouping;
    
    UPROPERTY()
    int32 SectionID;
    
    UPROPERTY()
    TArray<FString> MenuDescriptionArray;
    
    UPROPERTY()
    TArray<FString> FullSearchTitlesArray;
    
    UPROPERTY()
    TArray<FString> FullSearchKeywordsArray;
    
    UPROPERTY()
    TArray<FString> FullSearchCategoryArray;
    
    UPROPERTY()
    TArray<FString> LocalizedMenuDescriptionArray;
    
    UPROPERTY()
    TArray<FString> LocalizedFullSearchTitlesArray;
    
    UPROPERTY()
    TArray<FString> LocalizedFullSearchKeywordsArray;
    
    UPROPERTY()
    TArray<FString> LocalizedFullSearchCategoryArray;
    
    UPROPERTY()
    FString SearchText;
    
    FEdGraphSchemaAction();
};

