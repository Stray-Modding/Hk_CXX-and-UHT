#pragma once
#include "CoreMinimal.h"
#include "ConstraintDrive.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FConstraintDrive {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float Damping;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxForce;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnablePositionDrive: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableVelocityDrive: 1;
    
    FConstraintDrive();
};

