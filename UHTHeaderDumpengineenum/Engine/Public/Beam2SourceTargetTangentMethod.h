#pragma once
#include "CoreMinimal.h"
#include "Beam2SourceTargetTangentMethod.generated.h"

UENUM(BlueprintType)
enum Beam2SourceTargetTangentMethod {
    PEB2STTM_Direct,
    PEB2STTM_UserSet,
    PEB2STTM_Distribution,
    PEB2STTM_Emitter,
    PEB2STTM_MAX UMETA(Hidden),
};

