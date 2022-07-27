#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ARTraceResult.h"
#include "EARLineTraceChannels.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARTraceResultLibrary.generated.h"

class UARTrackedGeometry;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARTraceResultLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UARTraceResultLibrary();
    UFUNCTION(BlueprintPure)
    static UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetLocalTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static float GetDistanceFromCamera(const FARTraceResult& TraceResult);
    
};

