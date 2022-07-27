#pragma once
#include "CoreMinimal.h"
#include "AnimationActiveTransitionEntry.generated.h"

class UBlendProfile;

USTRUCT()
struct FAnimationActiveTransitionEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlendProfile* BlendProfile;
    
    ENGINE_API FAnimationActiveTransitionEntry();
};

