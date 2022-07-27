#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RootMotionSource_ConstantForce.generated.h"

class UCurveFloat;

USTRUCT()
struct ENGINE_API FRootMotionSource_ConstantForce : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Force;
    
    UPROPERTY()
    UCurveFloat* StrengthOverTime;
    
    FRootMotionSource_ConstantForce();
};

