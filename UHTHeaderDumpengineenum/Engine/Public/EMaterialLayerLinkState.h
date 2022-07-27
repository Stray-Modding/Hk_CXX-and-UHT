#pragma once
#include "CoreMinimal.h"
#include "EMaterialLayerLinkState.generated.h"

UENUM(BlueprintType)
enum class EMaterialLayerLinkState : uint8 {
    Uninitialized,
    LinkedToParent,
    UnlinkedFromParent,
    NotFromParent,
};

