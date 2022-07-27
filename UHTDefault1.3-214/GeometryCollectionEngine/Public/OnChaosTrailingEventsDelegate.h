#pragma once
#include "CoreMinimal.h"
#include "ChaosTrailingEventData.h"
#include "OnChaosTrailingEventsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChaosTrailingEvents, const TArray<FChaosTrailingEventData>&, TrailingEvents);

