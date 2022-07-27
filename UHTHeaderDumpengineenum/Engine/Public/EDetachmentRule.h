#pragma once
#include "CoreMinimal.h"
#include "EDetachmentRule.generated.h"

UENUM(BlueprintType)
enum class EDetachmentRule : uint8 {
    KeepRelative,
    KeepWorld,
};

