#pragma once
#include "CoreMinimal.h"
#include "OnlineTurnBasedMatchResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineTurnBasedMatchResult, const FString&, MatchID);

