#pragma once
#include "CoreMinimal.h"
#include "OnExpandableAreaExpansionChangedDelegate.generated.h"

class UExpandableArea;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExpandableAreaExpansionChanged, UExpandableArea*, Area, bool, bIsExpanded);

