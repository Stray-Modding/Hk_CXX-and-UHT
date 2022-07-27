#pragma once
#include "CoreMinimal.h"
#include "EPinHidingMode.generated.h"

UENUM(BlueprintType)
namespace EPinHidingMode {
    enum Type {
        NeverAsPin,
        PinHiddenByDefault,
        PinShownByDefault,
        AlwaysAsPin,
    };
}

