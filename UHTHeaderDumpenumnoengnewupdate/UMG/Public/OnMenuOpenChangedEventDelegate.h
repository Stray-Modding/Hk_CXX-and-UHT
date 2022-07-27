#pragma once
#include "CoreMinimal.h"
#include "OnMenuOpenChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuOpenChangedEvent, bool, bIsOpen);

