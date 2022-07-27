#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandDelegateSubType.generated.h"

UENUM(BlueprintType)
enum class EQuartzCommandDelegateSubType : uint8 {
    CommandOnFailedToQueue,
    CommandOnQueued,
    CommandOnCanceled,
    CommandOnAboutToStart,
    CommandOnStarted,
    Count,
};

