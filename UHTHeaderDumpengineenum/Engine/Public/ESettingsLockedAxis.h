#pragma once
#include "CoreMinimal.h"
#include "ESettingsLockedAxis.generated.h"

UENUM(BlueprintType)
namespace ESettingsLockedAxis {
    enum Type {
        None,
        X,
        Y,
        Z,
        Invalid,
    };
}

