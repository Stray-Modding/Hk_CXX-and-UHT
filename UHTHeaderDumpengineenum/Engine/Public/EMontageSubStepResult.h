#pragma once
#include "CoreMinimal.h"
#include "EMontageSubStepResult.generated.h"

UENUM(BlueprintType)
enum class EMontageSubStepResult : uint8 {
    Moved,
    NotMoved,
    InvalidSection,
    InvalidMontage,
};

