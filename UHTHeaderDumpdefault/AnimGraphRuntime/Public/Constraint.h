#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EConstraintOffsetOption.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ETransformConstraintType -FallbackName=ETransformConstraintType
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FilterOptionPerAxis -FallbackName=FilterOptionPerAxis
#include "Constraint.generated.h"

USTRUCT(BlueprintType)
struct FConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    EConstraintOffsetOption OffsetOption;
    
    UPROPERTY(EditAnywhere)
    ETransformConstraintType TransformType;
    
    UPROPERTY(EditAnywhere)
    FFilterOptionPerAxis PerAxis;
    
    ANIMGRAPHRUNTIME_API FConstraint();
};

