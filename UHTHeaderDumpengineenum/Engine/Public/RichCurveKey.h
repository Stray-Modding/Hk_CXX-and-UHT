#pragma once
#include "CoreMinimal.h"
#include "ERichCurveInterpMode.h"
#include "ERichCurveTangentWeightMode.h"
#include "ERichCurveTangentMode.h"
#include "RichCurveKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRichCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    float ArriveTangent;
    
    UPROPERTY()
    float ArriveTangentWeight;
    
    UPROPERTY()
    float LeaveTangent;
    
    UPROPERTY()
    float LeaveTangentWeight;
    
    FRichCurveKey();
};

