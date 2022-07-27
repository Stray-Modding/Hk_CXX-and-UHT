#pragma once
#include "CoreMinimal.h"
#include "BakedStateExitTransition.h"
#include "BakedAnimationState.generated.h"

USTRUCT(BlueprintType)
struct FBakedAnimationState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StateName;
    
    UPROPERTY()
    TArray<FBakedStateExitTransition> Transitions;
    
    UPROPERTY()
    int32 StateRootNodeIndex;
    
    UPROPERTY()
    int32 StartNotify;
    
    UPROPERTY()
    int32 EndNotify;
    
    UPROPERTY()
    int32 FullyBlendedNotify;
    
    UPROPERTY()
    bool bIsAConduit;
    
    UPROPERTY()
    int32 EntryRuleNodeIndex;
    
    UPROPERTY()
    TArray<int32> PlayerNodeIndices;
    
    UPROPERTY()
    TArray<int32> LayerNodeIndices;
    
    UPROPERTY()
    bool bAlwaysResetOnEntry;
    
    ENGINE_API FBakedAnimationState();
};

