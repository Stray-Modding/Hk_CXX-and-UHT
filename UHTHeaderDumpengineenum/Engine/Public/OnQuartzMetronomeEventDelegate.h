#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandQuantization.h"
#include "OnQuartzMetronomeEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnQuartzMetronomeEvent, FName, ClockName, EQuartzCommandQuantization, QuantizationType, int32, NumBars, int32, Beat, float, BeatFraction);

