#pragma once
#include "CoreMinimal.h"
#include "OnListEntryGeneratedDynamicDelegate.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListEntryGeneratedDynamic, UUserWidget*, Widget);

