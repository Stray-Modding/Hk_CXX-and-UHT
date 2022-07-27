#pragma once
#include "CoreMinimal.h"
#include "ConstraintBaseParams.generated.h"

USTRUCT()
struct ENGINE_API FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float Damping;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float Restitution;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ContactDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSoftConstraint: 1;
    
    FConstraintBaseParams();
};

