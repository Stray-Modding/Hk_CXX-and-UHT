#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RootMotionMovementParams.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionMovementParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bHasRootMotion;
    
    UPROPERTY()
    float BlendWeight;
    
    UPROPERTY()
    FTransform RootMotionTransform;
    
    ENGINE_API FRootMotionMovementParams();
};

