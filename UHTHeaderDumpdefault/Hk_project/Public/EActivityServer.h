#pragma once
#include "CoreMinimal.h"
#include "EActivityServer.generated.h"

UENUM()
enum class EActivityServer {
    Idle,
    SendingReset,
    SendingAvailability,
    SendingStart,
    SendingEnd,
};

