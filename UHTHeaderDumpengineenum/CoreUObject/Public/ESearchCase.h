#pragma once
#include "CoreMinimal.h"
#include "ESearchCase.generated.h"

UENUM(BlueprintType)
namespace ESearchCase {
    enum Type {
        CaseSensitive,
        IgnoreCase,
    };
}

