#pragma once
#include "CoreMinimal.h"
#include "ENavigationOptionFlag.generated.h"

UENUM(BlueprintType)
namespace ENavigationOptionFlag {
    enum Type {
        Default,
        Enable,
        Disable,
        MAX,
    };
}

