#pragma once
#include "CoreMinimal.h"
#include "EAppReturnType.generated.h"

UENUM(BlueprintType)
namespace EAppReturnType {
    enum Type {
        No,
        Yes,
        YesAll,
        NoAll,
        Cancel,
        Ok,
        Retry,
        Continue,
    };
}

