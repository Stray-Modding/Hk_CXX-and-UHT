#pragma once
#include "CoreMinimal.h"
#include "ELogTimes.generated.h"

UENUM(BlueprintType)
namespace ELogTimes {
    enum Type {
        None,
        UTC,
        SinceGStartTime,
        Local,
    };
}

