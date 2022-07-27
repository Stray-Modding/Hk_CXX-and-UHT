#pragma once
#include "CoreMinimal.h"
#include "CameraShakeDuration.h"
#include "CameraShakeInfo.generated.h"

USTRUCT()
struct ENGINE_API FCameraShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCameraShakeDuration Duration;
    
    UPROPERTY()
    float BlendIn;
    
    UPROPERTY()
    float BlendOut;
    
    FCameraShakeInfo();
};

