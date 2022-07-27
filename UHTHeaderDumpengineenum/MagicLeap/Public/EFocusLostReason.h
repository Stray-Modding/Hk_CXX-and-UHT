#pragma once
#include "CoreMinimal.h"
#include "EFocusLostReason.generated.h"

UENUM(BlueprintType)
enum class EFocusLostReason : uint8 {
    EFocusLostReason_Invalid,
    EFocusLostReason_System,
};

