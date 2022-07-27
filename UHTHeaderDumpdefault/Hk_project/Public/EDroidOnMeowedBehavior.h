#pragma once
#include "CoreMinimal.h"
#include "EDroidOnMeowedBehavior.generated.h"

UENUM()
enum class EDroidOnMeowedBehavior : uint8 {
    OnMeowedReaction_None,
    OnMeowedReaction_Disturbed,
    OnMeowedReaction_PlayingAnimation,
    OnMeowedReaction_ThrowObject,
    OnMeowedReaction_MAX UMETA(Hidden),
};

