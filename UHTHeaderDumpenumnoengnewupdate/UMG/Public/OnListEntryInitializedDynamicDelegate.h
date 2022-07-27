#pragma once
#include "CoreMinimal.h"
#include "OnListEntryInitializedDynamicDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListEntryInitializedDynamic, UObject*, Item, UUserWidget*, Widget);

