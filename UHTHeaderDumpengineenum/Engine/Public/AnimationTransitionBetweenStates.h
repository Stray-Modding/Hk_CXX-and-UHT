#pragma once
#include "CoreMinimal.h"
#include "AnimationStateBase.h"
#include "EAlphaBlendOption.h"
#include "ETransitionLogicType.h"
#include "AnimationTransitionBetweenStates.generated.h"

class UCurveFloat;
class UBlendProfile;

USTRUCT(BlueprintType)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PreviousState;
    
    UPROPERTY()
    int32 NextState;
    
    UPROPERTY()
    float CrossfadeDuration;
    
    UPROPERTY()
    int32 StartNotify;
    
    UPROPERTY()
    int32 EndNotify;
    
    UPROPERTY()
    int32 InterruptNotify;
    
    UPROPERTY()
    EAlphaBlendOption BlendMode;
    
    UPROPERTY()
    UCurveFloat* CustomCurve;
    
    UPROPERTY()
    UBlendProfile* BlendProfile;
    
    UPROPERTY()
    TEnumAsByte<ETransitionLogicType::Type> LogicType;
    
    ENGINE_API FAnimationTransitionBetweenStates();
};

