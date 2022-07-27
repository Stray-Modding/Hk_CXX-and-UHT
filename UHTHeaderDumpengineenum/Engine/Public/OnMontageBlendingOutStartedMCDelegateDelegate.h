#pragma once
#include "CoreMinimal.h"
#include "OnMontageBlendingOutStartedMCDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageBlendingOutStartedMCDelegate, UAnimMontage*, Montage, bool, bInterrupted);

