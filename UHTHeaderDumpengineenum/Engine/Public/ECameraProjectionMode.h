#pragma once
#include "CoreMinimal.h"
#include "ECameraProjectionMode.generated.h"

UENUM(BlueprintType)
namespace ECameraProjectionMode {
    enum Type {
        Perspective,
        Orthographic,
    };
}

