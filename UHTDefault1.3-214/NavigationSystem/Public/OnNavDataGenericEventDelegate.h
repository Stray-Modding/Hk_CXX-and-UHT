#pragma once
#include "CoreMinimal.h"
#include "OnNavDataGenericEventDelegate.generated.h"

class ANavigationData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNavDataGenericEvent, ANavigationData*, NavData);

