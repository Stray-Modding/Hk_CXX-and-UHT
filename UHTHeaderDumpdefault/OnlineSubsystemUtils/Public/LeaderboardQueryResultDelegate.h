#pragma once
#include "CoreMinimal.h"
#include "LeaderboardQueryResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaderboardQueryResult, int32, LeaderboardValue);

