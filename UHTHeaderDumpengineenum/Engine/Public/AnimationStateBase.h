#pragma once
#include "CoreMinimal.h"
#include "AnimationStateBase.generated.h"

USTRUCT()
struct FAnimationStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StateName;
    
    ENGINE_API FAnimationStateBase();
};

