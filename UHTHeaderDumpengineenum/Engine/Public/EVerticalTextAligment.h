#pragma once
#include "CoreMinimal.h"
#include "EVerticalTextAligment.generated.h"

UENUM(BlueprintType)
enum EVerticalTextAligment {
    EVRTA_TextTop,
    EVRTA_TextCenter,
    EVRTA_TextBottom,
    EVRTA_QuadTop,
    EVRTA_MAX UMETA(Hidden),
};

