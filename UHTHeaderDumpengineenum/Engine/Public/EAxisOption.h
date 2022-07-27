#pragma once
#include "CoreMinimal.h"
#include "EAxisOption.generated.h"

UENUM(BlueprintType)
namespace EAxisOption {
    enum Type {
        X,
        Y,
        Z,
        X_Neg,
        Y_Neg,
        Z_Neg,
        Custom,
    };
}

