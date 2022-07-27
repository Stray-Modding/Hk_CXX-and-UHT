#pragma once
#include "CoreMinimal.h"
#include "EInterpToBehaviourType.generated.h"

UENUM(BlueprintType)
enum class EInterpToBehaviourType : uint8 {
    OneShot,
    OneShot_Reverse,
    Loop_Reset,
    PingPong,
};

