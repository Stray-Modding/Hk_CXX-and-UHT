#pragma once
#include "CoreMinimal.h"
#include "EProxyNormalComputationMethod.generated.h"

UENUM(BlueprintType)
namespace EProxyNormalComputationMethod {
    enum Type {
        AngleWeighted,
        AreaWeighted,
        EqualWeighted,
    };
}

