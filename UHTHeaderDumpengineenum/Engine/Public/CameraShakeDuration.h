#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeDurationType.h"
#include "CameraShakeDuration.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeDuration {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    ECameraShakeDurationType Type;
    
public:
    FCameraShakeDuration();
};

