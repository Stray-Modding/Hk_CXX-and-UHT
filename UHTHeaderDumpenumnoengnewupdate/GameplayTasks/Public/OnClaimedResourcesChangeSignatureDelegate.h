#pragma once
#include "CoreMinimal.h"
#include "GameplayResourceSet.h"
#include "OnClaimedResourcesChangeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClaimedResourcesChangeSignature, FGameplayResourceSet, NewlyClaimed, FGameplayResourceSet, FreshlyReleased);

