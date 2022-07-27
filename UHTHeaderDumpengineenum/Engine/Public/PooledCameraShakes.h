#pragma once
#include "CoreMinimal.h"
#include "PooledCameraShakes.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FPooledCameraShakes {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UCameraShakeBase*> PooledShakes;
    
    ENGINE_API FPooledCameraShakes();
};

