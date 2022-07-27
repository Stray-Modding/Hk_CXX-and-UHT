#pragma once
#include "CoreMinimal.h"
#include "ECameraShakePlaySpace.generated.h"

UENUM(BlueprintType)
enum class ECameraShakePlaySpace : uint8 {
    CameraLocal,
    World,
    UserDefined,
};

