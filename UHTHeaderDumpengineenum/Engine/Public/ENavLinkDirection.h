#pragma once
#include "CoreMinimal.h"
#include "ENavLinkDirection.generated.h"

UENUM(BlueprintType)
namespace ENavLinkDirection {
    enum Type {
        BothWays,
        LeftToRight,
        RightToLeft,
    };
}

