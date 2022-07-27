#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessChangeNotifyMode.generated.h"

UENUM(BlueprintType)
enum class EPropertyAccessChangeNotifyMode : uint8 {
    Default,
    Never,
    Always,
};

