#pragma once
#include "CoreMinimal.h"
#include "ERangeBoundTypes.generated.h"

UENUM(BlueprintType)
namespace ERangeBoundTypes {
    enum Type {
        Exclusive,
        Inclusive,
        Open,
    };
}

