#pragma once
#include "CoreMinimal.h"
#include "EFocusLostReason.generated.h"

UENUM()
enum class EFocusLostReason {
    EFocusLostReason_Invalid,
    EFocusLostReason_System,
};

