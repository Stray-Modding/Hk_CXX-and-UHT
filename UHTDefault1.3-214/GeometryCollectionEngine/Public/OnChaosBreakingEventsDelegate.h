#pragma once
#include "CoreMinimal.h"
#include "ChaosBreakingEventData.h"
#include "OnChaosBreakingEventsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChaosBreakingEvents, const TArray<FChaosBreakingEventData>&, BreakingEvents);

