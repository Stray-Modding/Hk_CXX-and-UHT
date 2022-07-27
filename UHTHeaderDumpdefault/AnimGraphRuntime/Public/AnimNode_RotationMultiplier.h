#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneAxis -FallbackName=EBoneAxis
#include "AnimNode_RotationMultiplier.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Multiplier;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;
    
    UPROPERTY(EditAnywhere)
    bool bIsAdditive;
    
    FAnimNode_RotationMultiplier();
};

