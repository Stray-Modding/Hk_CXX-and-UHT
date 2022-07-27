#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoneSocketTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneControlSpace -FallbackName=EBoneControlSpace
#include "AnimNode_TwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKBone;
    
    UPROPERTY(EditAnywhere)
    float StartStretchRatio;
    
    UPROPERTY(EditAnywhere)
    float MaxStretchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectorLocation;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget EffectorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector JointTargetLocation;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget JointTarget;
    
    UPROPERTY(EditAnywhere)
    FAxis TwistAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowStretching: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTakeRotationFromEffectorSpace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMaintainEffectorRelRot: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowTwist: 1;
    
    FAnimNode_TwoBoneIK();
};

