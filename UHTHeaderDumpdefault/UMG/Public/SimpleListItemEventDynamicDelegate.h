#pragma once
#include "CoreMinimal.h"
#include "SimpleListItemEventDynamicDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleListItemEventDynamic, UObject*, Item);

