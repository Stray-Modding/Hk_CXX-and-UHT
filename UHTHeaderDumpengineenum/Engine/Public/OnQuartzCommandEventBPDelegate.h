#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandDelegateSubType.h"
#include "OnQuartzCommandEventBPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQuartzCommandEventBP, EQuartzCommandDelegateSubType, EventType, FName, Name);

