#pragma once
#include "CoreMinimal.h"
#include "EBlueprintPinStyleType.generated.h"

UENUM(BlueprintType)
enum EBlueprintPinStyleType {
    BPST_Original,
    BPST_VariantA,
    BPST_MAX UMETA(Hidden),
};

