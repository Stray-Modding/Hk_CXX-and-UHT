#pragma once
#include "CoreMinimal.h"
#include "ConstraintBaseParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ELinearConstraintMotion -FallbackName=ELinearConstraintMotion
#include "LinearConstraint.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FLinearConstraint : public FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Limit;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELinearConstraintMotion> XMotion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELinearConstraintMotion> YMotion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELinearConstraintMotion> ZMotion;
    
    FLinearConstraint();
};

