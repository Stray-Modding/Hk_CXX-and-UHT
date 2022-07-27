#pragma once
#include "CoreMinimal.h"
#include "EWindowMode.generated.h"

UENUM(BlueprintType)
namespace EWindowMode {
    enum Type {
        Fullscreen,
        WindowedFullscreen,
        Windowed,
    };
}

