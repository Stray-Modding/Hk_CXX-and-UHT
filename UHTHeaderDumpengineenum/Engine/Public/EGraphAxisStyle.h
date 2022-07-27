#pragma once
#include "CoreMinimal.h"
#include "EGraphAxisStyle.generated.h"

UENUM(BlueprintType)
namespace EGraphAxisStyle {
    enum Type {
        Lines,
        Notches,
        Grid,
    };
}

