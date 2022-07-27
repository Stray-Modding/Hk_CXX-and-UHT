#pragma once
#include "CoreMinimal.h"
#include "ECustomDepthStencil.generated.h"

UENUM(BlueprintType)
namespace ECustomDepthStencil {
    enum Type {
        Disabled,
        Enabled,
        EnabledOnDemand,
        EnabledWithStencil,
    };
}

