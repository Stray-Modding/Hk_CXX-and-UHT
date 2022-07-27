#pragma once
#include "CoreMinimal.h"
#include "OnAudioVirtualizationChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioVirtualizationChanged, bool, bIsVirtualized);

