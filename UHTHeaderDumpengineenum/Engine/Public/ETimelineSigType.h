#pragma once
#include "CoreMinimal.h"
#include "ETimelineSigType.generated.h"

UENUM(BlueprintType)
enum ETimelineSigType {
    ETS_EventSignature,
    ETS_FloatSignature,
    ETS_VectorSignature,
    ETS_LinearColorSignature,
    ETS_InvalidSignature,
    ETS_MAX UMETA(Hidden),
};

