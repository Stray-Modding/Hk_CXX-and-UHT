#pragma once
#include "CoreMinimal.h"
#include "EApplicationState.generated.h"

UENUM(BlueprintType)
namespace EApplicationState {
    enum Type {
        Unknown,
        Inactive,
        Background,
        Active,
    };
}

