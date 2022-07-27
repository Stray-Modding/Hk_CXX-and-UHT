#pragma once
#include "CoreMinimal.h"
#include "EAdManagerDelegate.generated.h"

UENUM(BlueprintType)
enum EAdManagerDelegate {
    AMD_ClickedBanner,
    AMD_UserClosedAd,
    AMD_MAX UMETA(Hidden),
};

