#pragma once
#include "CoreMinimal.h"
#include "EMIDCreationFlags.generated.h"

UENUM(BlueprintType)
enum class EMIDCreationFlags : uint8 {
    None,
    Transient,
};

