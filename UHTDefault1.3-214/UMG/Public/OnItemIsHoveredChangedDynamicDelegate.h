#pragma once
#include "CoreMinimal.h"
#include "OnItemIsHoveredChangedDynamicDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemIsHoveredChangedDynamic, UObject*, Item, bool, bIsHovered);

