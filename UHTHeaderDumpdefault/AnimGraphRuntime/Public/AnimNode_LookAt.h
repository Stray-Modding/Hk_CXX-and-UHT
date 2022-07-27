#pragma once
#include "CoreMinimal.h"
#include "EInterpolationBlend.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "BoneSocketTarget.h"
#include "AnimNode_LookAt.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_LookAt : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(EditAnywhere)
    FAxis LookAt_Axis;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EInterpolationBlend::Type> InterpolationType;
    
    UPROPERTY(EditAnywhere)
    FAxis LookUp_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationTriggerThreashold;
    
    FAnimNode_LookAt();
};

