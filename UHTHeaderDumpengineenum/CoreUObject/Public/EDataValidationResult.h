#pragma once
#include "CoreMinimal.h"
#include "EDataValidationResult.generated.h"

UENUM(BlueprintType)
enum class EDataValidationResult : uint8 {
    Invalid,
    Valid,
    NotValidated,
};

