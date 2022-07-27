#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneRotationSource -FallbackName=EBoneRotationSource
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BoneSocketTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneControlSpace -FallbackName=EBoneControlSpace
#include "AnimNode_Fabrik.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform EffectorTransform;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget EffectorTarget;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TipBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere)
    float Precision;
    
    UPROPERTY(EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;
    
    FAnimNode_Fabrik();
};

