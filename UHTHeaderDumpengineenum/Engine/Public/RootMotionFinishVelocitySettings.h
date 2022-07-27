#pragma once
#include "CoreMinimal.h"
#include "ERootMotionFinishVelocityMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RootMotionFinishVelocitySettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRootMotionFinishVelocitySettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    ERootMotionFinishVelocityMode Mode;
    
    UPROPERTY()
    FVector SetVelocity;
    
    UPROPERTY()
    float ClampVelocity;
    
    FRootMotionFinishVelocitySettings();
};

