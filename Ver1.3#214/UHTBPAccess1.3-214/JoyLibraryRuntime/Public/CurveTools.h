#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "CurveTools.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UCurveTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCurveTools();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRuntimeFloatCurve& _curve, float _time);
    
};

