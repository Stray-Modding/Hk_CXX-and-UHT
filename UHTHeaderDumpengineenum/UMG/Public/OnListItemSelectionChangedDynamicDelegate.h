#pragma once
#include "CoreMinimal.h"
#include "OnListItemSelectionChangedDynamicDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListItemSelectionChangedDynamic, UObject*, Item, bool, bIsSelected);

