#pragma once
#include "CoreMinimal.h"
#include "ELuminComponentType.generated.h"

UENUM(BlueprintType)
enum class ELuminComponentType : uint8 {
    Universe,
    Fullscreen,
    SearchProvider,
    MusicService,
    Console,
    SystemUI,
};

