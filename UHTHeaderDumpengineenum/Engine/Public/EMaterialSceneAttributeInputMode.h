#pragma once
#include "CoreMinimal.h"
#include "EMaterialSceneAttributeInputMode.generated.h"

UENUM(BlueprintType)
namespace EMaterialSceneAttributeInputMode {
    enum Type {
        Coordinates,
        OffsetFraction,
    };
}

