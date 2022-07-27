#pragma once
#include "CoreMinimal.h"
#include "EComponentCreationMethod.generated.h"

UENUM(BlueprintType)
enum class EComponentCreationMethod : uint8 {
    Native,
    SimpleConstructionScript,
    UserConstructionScript,
    Instance,
};

