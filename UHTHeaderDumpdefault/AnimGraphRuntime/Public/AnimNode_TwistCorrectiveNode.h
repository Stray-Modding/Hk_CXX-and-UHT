#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
#include "AnimNode_SkeletalControlBase.h"
#include "ReferenceBoneFrame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimCurveParam -FallbackName=AnimCurveParam
#include "AnimNode_TwistCorrectiveNode.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FReferenceBoneFrame BaseFrame;
    
    UPROPERTY(EditAnywhere)
    FReferenceBoneFrame TwistFrame;
    
    UPROPERTY(EditAnywhere)
    FAxis TwistPlaneNormalAxis;
    
    UPROPERTY(EditAnywhere)
    float RangeMax;
    
    UPROPERTY(EditAnywhere)
    float RemappedMin;
    
    UPROPERTY(EditAnywhere)
    float RemappedMax;
    
    UPROPERTY(EditAnywhere)
    FAnimCurveParam Curve;
    
    FAnimNode_TwistCorrectiveNode();
};

