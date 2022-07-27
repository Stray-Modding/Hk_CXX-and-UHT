#pragma once
#include "CoreMinimal.h"
#include "ENavigationQueryResult.generated.h"

UENUM(BlueprintType)
namespace ENavigationQueryResult {
    enum Type {
        Invalid,
        Error,
        Fail,
        Success,
    };
}

