#pragma once
#include "CoreMinimal.h"
#include "ETransitionType.generated.h"

UENUM(BlueprintType)
enum class ETransitionType : uint8 {
    None,
    Paused,
    Loading,
    Saving,
    Connecting,
    Precaching,
    WaitingToConnect,
    MAX,
};

