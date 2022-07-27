#pragma once
#include "CoreMinimal.h"
#include "EMonoChannelUpmixMethod.generated.h"

UENUM()
enum class EMonoChannelUpmixMethod : int8 {
    Linear,
    EqualPower,
    FullVolume,
};

