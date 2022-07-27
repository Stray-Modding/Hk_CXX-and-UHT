#pragma once
#include "CoreMinimal.h"
#include "EEarlyZPass.generated.h"

UENUM(BlueprintType)
namespace EEarlyZPass {
    enum Type {
        None,
        OpaqueOnly,
        OpaqueAndMasked,
        Auto,
    };
}

