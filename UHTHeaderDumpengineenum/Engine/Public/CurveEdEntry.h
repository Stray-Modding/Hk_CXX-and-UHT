#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "CurveEdEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCurveEdEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* CurveObject;
    
    UPROPERTY()
    FColor CurveColor;
    
    UPROPERTY()
    FString CurveName;
    
    UPROPERTY()
    int32 bHideCurve;
    
    UPROPERTY()
    int32 bColorCurve;
    
    UPROPERTY()
    int32 bFloatingPointColorCurve;
    
    UPROPERTY()
    int32 bClamp;
    
    UPROPERTY()
    float ClampLow;
    
    UPROPERTY()
    float ClampHigh;
    
    ENGINE_API FCurveEdEntry();
};

