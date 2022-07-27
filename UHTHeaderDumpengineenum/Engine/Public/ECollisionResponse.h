#pragma once
#include "CoreMinimal.h"
#include "ECollisionResponse.generated.h"

UENUM(BlueprintType)
enum ECollisionResponse {
    ECR_Ignore,
    ECR_Overlap,
    ECR_Block,
    ECR_MAX UMETA(Hidden),
};

