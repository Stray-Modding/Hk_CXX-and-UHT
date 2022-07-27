#pragma once
#include "CoreMinimal.h"
#include "DroneMovementTarget.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FDroneMovementTarget {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    HK_PROJECT_API FDroneMovementTarget();
};

