#pragma once
#include "CoreMinimal.h"
#include "BlueprintSessionResult.h"
#include "BlueprintFindSessionsResultDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintFindSessionsResultDelegate, const TArray<FBlueprintSessionResult>&, Results);

