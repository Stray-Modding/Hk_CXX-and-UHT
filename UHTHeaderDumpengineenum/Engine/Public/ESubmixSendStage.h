#pragma once
#include "CoreMinimal.h"
#include "ESubmixSendStage.generated.h"

UENUM(BlueprintType)
enum class ESubmixSendStage : uint8 {
    PostDistanceAttenuation,
    PreDistanceAttenuation,
};

