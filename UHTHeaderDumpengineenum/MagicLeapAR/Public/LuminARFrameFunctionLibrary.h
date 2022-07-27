#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ELuminARTrackingState.h"
#include "ELuminARLineTraceChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARTraceResult -FallbackName=ARTraceResult
#include "LuminARFrameFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class MAGICLEAPAR_API ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuminARFrameFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool LuminARLineTrace(UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults);
    
    UFUNCTION(BlueprintPure)
    static ELuminARTrackingState GetTrackingState();
    
};

