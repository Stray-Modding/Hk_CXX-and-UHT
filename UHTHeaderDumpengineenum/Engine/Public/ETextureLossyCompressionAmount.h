#pragma once
#include "CoreMinimal.h"
#include "ETextureLossyCompressionAmount.generated.h"

UENUM(BlueprintType)
enum ETextureLossyCompressionAmount {
    TLCA_Default,
    TLCA_None,
    TLCA_Lowest,
    TLCA_Low,
    TLCA_Medium,
    TLCA_High,
    TLCA_Highest,
    TLCA_MAX UMETA(Hidden),
};

