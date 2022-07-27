#pragma once
#include "CoreMinimal.h"
#include "EPreviewAnimationBlueprintApplicationMethod.generated.h"

UENUM(BlueprintType)
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
    LinkedLayers,
    LinkedAnimGraph,
};

