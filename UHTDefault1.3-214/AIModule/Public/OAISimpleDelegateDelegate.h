#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingResult.h"
#include "OAISimpleDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOAISimpleDelegate, TEnumAsByte<EPathFollowingResult::Type>, MovementResult);

