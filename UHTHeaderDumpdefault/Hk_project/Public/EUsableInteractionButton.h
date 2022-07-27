#pragma once
#include "CoreMinimal.h"
#include "EUsableInteractionButton.generated.h"

UENUM()
enum EUsableInteractionButton {
    UsableInteractionButton_JumpUp,
    UsableInteractionButton_JumpDown,
    UsableInteractionButton_Backpack,
    UsableInteractionButton_Cat,
    UsableInteractionButton_COUNT,
    UsableInteractionButton_MAX UMETA(Hidden),
};

