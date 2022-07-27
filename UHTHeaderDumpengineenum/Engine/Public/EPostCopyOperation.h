#pragma once
#include "CoreMinimal.h"
#include "EPostCopyOperation.generated.h"

UENUM(BlueprintType)
enum class EPostCopyOperation : uint8 {
    None,
    LogicalNegateBool,
};

