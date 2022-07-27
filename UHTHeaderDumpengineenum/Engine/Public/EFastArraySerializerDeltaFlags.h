#pragma once
#include "CoreMinimal.h"
#include "EFastArraySerializerDeltaFlags.generated.h"

UENUM(BlueprintType)
enum class EFastArraySerializerDeltaFlags : uint8 {
    None,
    HasBeenSerialized,
    HasDeltaBeenRequested,
    IsUsingDeltaSerialization = 0x4,
};

