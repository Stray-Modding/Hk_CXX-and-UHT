#pragma once
#include "CoreMinimal.h"
#include "ConstraintBaseParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EAngularConstraintMotion -FallbackName=EAngularConstraintMotion
#include "TwistConstraint.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTwistConstraint : public FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TwistLimitDegrees;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAngularConstraintMotion> TwistMotion;
    
    FTwistConstraint();
};

