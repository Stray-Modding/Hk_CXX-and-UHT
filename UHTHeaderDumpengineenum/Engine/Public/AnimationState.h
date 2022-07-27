#pragma once
#include "CoreMinimal.h"
#include "AnimationStateBase.h"
#include "AnimationTransitionRule.h"
#include "AnimationState.generated.h"

USTRUCT()
struct FAnimationState : public FAnimationStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAnimationTransitionRule> Transitions;
    
    UPROPERTY()
    int32 StateRootNodeIndex;
    
    UPROPERTY()
    int32 StartNotify;
    
    UPROPERTY()
    int32 EndNotify;
    
    UPROPERTY()
    int32 FullyBlendedNotify;
    
    ENGINE_API FAnimationState();
};

