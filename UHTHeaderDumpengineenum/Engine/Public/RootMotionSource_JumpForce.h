#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RootMotionSource_JumpForce.generated.h"

class UCurveVector;
class UCurveFloat;

USTRUCT()
struct ENGINE_API FRootMotionSource_JumpForce : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    float Distance;
    
    UPROPERTY()
    float Height;
    
    UPROPERTY()
    bool bDisableTimeout;
    
    UPROPERTY()
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY()
    UCurveFloat* TimeMappingCurve;
    
    FRootMotionSource_JumpForce();
};

