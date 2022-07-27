#pragma once
#include "CoreMinimal.h"
#include "AnimationTransitionRule.generated.h"

USTRUCT(BlueprintType)
struct FAnimationTransitionRule {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName RuleToExecute;
    
    UPROPERTY()
    bool TransitionReturnVal;
    
    UPROPERTY()
    int32 TransitionIndex;
    
    ENGINE_API FAnimationTransitionRule();
};

