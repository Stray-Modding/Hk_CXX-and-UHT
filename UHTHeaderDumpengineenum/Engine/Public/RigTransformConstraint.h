#pragma once
#include "CoreMinimal.h"
#include "EConstraintTransform.h"
#include "RigTransformConstraint.generated.h"

USTRUCT(BlueprintType)
struct FRigTransformConstraint {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EConstraintTransform::Type> TranformType;
    
    UPROPERTY(EditAnywhere)
    FName ParentSpace;
    
    UPROPERTY()
    float Weight;
    
    ENGINE_API FRigTransformConstraint();
};

