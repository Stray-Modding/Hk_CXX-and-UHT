#pragma once
#include "CoreMinimal.h"
#include "ETwitterIntegrationDelegate.generated.h"

UENUM(BlueprintType)
enum ETwitterIntegrationDelegate {
    TID_AuthorizeComplete,
    TID_TweetUIComplete,
    TID_RequestComplete,
    TID_MAX UMETA(Hidden),
};

