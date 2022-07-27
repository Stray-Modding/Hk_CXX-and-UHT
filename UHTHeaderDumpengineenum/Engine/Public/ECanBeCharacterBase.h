#pragma once
#include "CoreMinimal.h"
#include "ECanBeCharacterBase.generated.h"

UENUM(BlueprintType)
enum ECanBeCharacterBase {
    ECB_No,
    ECB_Yes,
    ECB_Owner,
    ECB_MAX UMETA(Hidden),
};

