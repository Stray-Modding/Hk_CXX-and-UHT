#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EScaleChainInitialLength.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBias -FallbackName=InputScaleBias
#include "AnimNode_ScaleChainLength.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ScaleChainLength : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultChainLength;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ChainStartBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ChainEndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    EScaleChainInitialLength ChainInitialLength;
    
    FAnimNode_ScaleChainLength();
};

