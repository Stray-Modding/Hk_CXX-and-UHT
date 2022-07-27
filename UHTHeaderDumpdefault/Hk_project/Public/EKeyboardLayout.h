#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayout.generated.h"

UENUM()
enum class EKeyboardLayout {
    KeyboardLayout_QWERTY,
    KeyboardLayout_AZERTY,
    KeyboardLayout_QWERTZ,
    KeyboardLayout_MAX UMETA(Hidden),
};

