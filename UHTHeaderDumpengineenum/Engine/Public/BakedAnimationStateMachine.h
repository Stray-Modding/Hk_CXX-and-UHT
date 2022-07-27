#pragma once
#include "CoreMinimal.h"
#include "BakedAnimationState.h"
#include "AnimationTransitionBetweenStates.h"
#include "BakedAnimationStateMachine.generated.h"

USTRUCT(BlueprintType)
struct FBakedAnimationStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MachineName;
    
    UPROPERTY()
    int32 InitialState;
    
    UPROPERTY()
    TArray<FBakedAnimationState> States;
    
    UPROPERTY()
    TArray<FAnimationTransitionBetweenStates> Transitions;
    
    ENGINE_API FBakedAnimationStateMachine();
};

