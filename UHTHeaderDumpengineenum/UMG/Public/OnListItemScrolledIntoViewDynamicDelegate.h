#pragma once
#include "CoreMinimal.h"
#include "OnListItemScrolledIntoViewDynamicDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListItemScrolledIntoViewDynamic, UObject*, Item, UUserWidget*, Widget);

