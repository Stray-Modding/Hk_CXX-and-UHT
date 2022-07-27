#pragma once
#include "CoreMinimal.h"
#include "OnListEntryReleasedDynamicDelegate.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListEntryReleasedDynamic, UUserWidget*, Widget);

