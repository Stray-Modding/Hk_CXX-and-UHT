#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_SkeletalControlBase.h"
#include "ESplineBoneAxis.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "AnimNode_SplineIK.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference StartBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EndBone;
    
    UPROPERTY(EditAnywhere)
    ESplineBoneAxis BoneAxis;
    
    UPROPERTY(EditAnywhere)
    bool bAutoCalculateSpline;
    
    UPROPERTY(EditAnywhere)
    int32 PointCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FTransform> ControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TwistStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TwistEnd;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend TwistBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Offset;
    
    FAnimNode_SplineIK();
};

