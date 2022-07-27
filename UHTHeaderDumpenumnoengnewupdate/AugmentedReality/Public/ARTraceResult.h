#pragma once
#include "CoreMinimal.h"
#include "EARLineTraceChannels.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARTraceResult.generated.h"

class UARTrackedGeometry;

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARTraceResult {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float DistanceFromCamera;
    
    UPROPERTY()
    EARLineTraceChannels TraceChannel;
    
    UPROPERTY()
    FTransform LocalTransform;
    
    UPROPERTY()
    UARTrackedGeometry* TrackedGeometry;
    
public:
    FARTraceResult();
};

