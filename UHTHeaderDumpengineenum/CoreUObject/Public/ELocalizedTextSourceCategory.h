#pragma once
#include "CoreMinimal.h"
#include "ELocalizedTextSourceCategory.generated.h"

UENUM(BlueprintType)
enum class ELocalizedTextSourceCategory : uint8 {
    Game,
    Engine,
    Editor,
};

