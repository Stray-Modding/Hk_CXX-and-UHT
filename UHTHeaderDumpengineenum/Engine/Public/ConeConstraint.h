#pragma once
#include "CoreMinimal.h"
#include "ConstraintBaseParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EAngularConstraintMotion -FallbackName=EAngularConstraintMotion
#include "ConeConstraint.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FConeConstraint : public FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Swing1LimitDegrees;
    
    UPROPERTY(EditAnywhere)
    float Swing2LimitDegrees;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAngularConstraintMotion> Swing1Motion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAngularConstraintMotion> Swing2Motion;
    
    FConeConstraint();
};

