#pragma once
#include "CoreMinimal.h"
#include "ETwitterRequestMethod.generated.h"

UENUM(BlueprintType)
enum ETwitterRequestMethod {
    TRM_Get,
    TRM_Post,
    TRM_Delete,
    TRM_MAX UMETA(Hidden),
};

