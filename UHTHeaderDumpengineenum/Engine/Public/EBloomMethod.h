#pragma once
#include "CoreMinimal.h"
#include "EBloomMethod.generated.h"

UENUM(BlueprintType)
enum EBloomMethod {
    BM_SOG,
    BM_FFT,
    BM_MAX UMETA(Hidden),
};

