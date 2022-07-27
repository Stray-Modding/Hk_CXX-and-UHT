#pragma once
#include "CoreMinimal.h"
#include "ConstraintProfileProperties.h"
#include "PhysicsConstraintProfileHandle.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsConstraintProfileHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    FConstraintProfileProperties ProfileProperties;
    
    UPROPERTY(EditAnywhere)
    FName ProfileName;
    
    ENGINE_API FPhysicsConstraintProfileHandle();
};

