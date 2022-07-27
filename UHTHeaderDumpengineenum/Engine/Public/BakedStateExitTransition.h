#pragma once
#include "CoreMinimal.h"
#include "BakedStateExitTransition.generated.h"

USTRUCT(BlueprintType)
struct FBakedStateExitTransition {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CanTakeDelegateIndex;
    
    UPROPERTY()
    int32 CustomResultNodeIndex;
    
    UPROPERTY()
    int32 TransitionIndex;
    
    UPROPERTY()
    bool bDesiredTransitionReturnValue;
    
    UPROPERTY()
    bool bAutomaticRemainingTimeRule;
    
    UPROPERTY()
    TArray<int32> PoseEvaluatorLinks;
    
    ENGINE_API FBakedStateExitTransition();
};

