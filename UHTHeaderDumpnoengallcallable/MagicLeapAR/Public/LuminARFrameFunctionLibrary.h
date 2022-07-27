#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ELuminARTrackingState.h"
#include "ELuminARLineTraceChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARTraceResult -FallbackName=ARTraceResult
#include "LuminARFrameFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAGICLEAPAR_API ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuminARFrameFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool LuminARLineTrace(UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELuminARTrackingState GetTrackingState();
    
};

