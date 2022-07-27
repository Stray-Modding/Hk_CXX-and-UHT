#pragma once
#include "CoreMinimal.h"
#include "EAnimLinkMethod.generated.h"

UENUM(BlueprintType)
namespace EAnimLinkMethod {
    enum Type {
        Absolute,
        Relative,
        Proportional,
    };
}

