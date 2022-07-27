#pragma once
#include "CoreMinimal.h"
#include "EHoudiniMultiParmModificationType.generated.h"

UENUM()
enum class EHoudiniMultiParmModificationType : uint8 {
    None,
    Inserted,
    Removed,
    Modified,
};

