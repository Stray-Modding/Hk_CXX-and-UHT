#pragma once
#include "CoreMinimal.h"
#include "EAttachmentRule.generated.h"

UENUM(BlueprintType)
enum class EAttachmentRule : uint8 {
    KeepRelative,
    KeepWorld,
    SnapToTarget,
};

