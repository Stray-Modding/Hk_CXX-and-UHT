#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CurveTools.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UCurveTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCurveTools();
    UFUNCTION(BlueprintPure)
    static float GetFloatValue(const FRuntimeFloatCurve& _curve, float _time);
    
};

