#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RootMotionSource_MoveToForce.generated.h"

class UCurveVector;

USTRUCT()
struct ENGINE_API FRootMotionSource_MoveToForce : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    FVector TargetLocation;
    
    UPROPERTY()
    bool bRestrictSpeedToExpected;
    
    UPROPERTY()
    UCurveVector* PathOffsetCurve;
    
    FRootMotionSource_MoveToForce();
};

