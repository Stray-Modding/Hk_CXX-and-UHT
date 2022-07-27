#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RootMotionSource_MoveToDynamicForce.generated.h"

class UCurveVector;
class UCurveFloat;

USTRUCT()
struct ENGINE_API FRootMotionSource_MoveToDynamicForce : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    FVector InitialTargetLocation;
    
    UPROPERTY()
    FVector TargetLocation;
    
    UPROPERTY()
    bool bRestrictSpeedToExpected;
    
    UPROPERTY()
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY()
    UCurveFloat* TimeMappingCurve;
    
    FRootMotionSource_MoveToDynamicForce();
};

