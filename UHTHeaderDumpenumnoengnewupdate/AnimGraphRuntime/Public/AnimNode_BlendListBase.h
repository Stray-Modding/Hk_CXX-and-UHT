#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "EBlendListTransitionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
#include "AnimNode_BlendListBase.generated.h"

class UCurveFloat;
class UBlendProfile;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendListBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FPoseLink> BlendPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlendListTransitionType TransitionType;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption BlendType;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bResetChildOnActivation;
    
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* CustomBlendCurve;
    
    UPROPERTY(EditAnywhere)
    UBlendProfile* BlendProfile;
    
    FAnimNode_BlendListBase();
};

