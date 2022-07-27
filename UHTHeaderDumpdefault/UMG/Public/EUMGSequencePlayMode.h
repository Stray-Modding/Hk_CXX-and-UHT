#pragma once
#include "CoreMinimal.h"
#include "EUMGSequencePlayMode.generated.h"

UENUM()
namespace EUMGSequencePlayMode {
    enum Type {
        Forward,
        Reverse,
        PingPong,
    };
}

