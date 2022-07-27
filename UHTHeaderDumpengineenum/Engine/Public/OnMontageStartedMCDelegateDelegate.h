#pragma once
#include "CoreMinimal.h"
#include "OnMontageStartedMCDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMontageStartedMCDelegate, UAnimMontage*, Montage);

