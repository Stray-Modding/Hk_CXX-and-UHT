#pragma once
#include "CoreMinimal.h"
#include "CurveEdEntry.h"
#include "CurveEdTab.generated.h"

USTRUCT(BlueprintType)
struct FCurveEdTab {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TabName;
    
    UPROPERTY()
    TArray<FCurveEdEntry> Curves;
    
    UPROPERTY()
    float ViewStartInput;
    
    UPROPERTY()
    float ViewEndInput;
    
    UPROPERTY()
    float ViewStartOutput;
    
    UPROPERTY()
    float ViewEndOutput;
    
    ENGINE_API FCurveEdTab();
};

