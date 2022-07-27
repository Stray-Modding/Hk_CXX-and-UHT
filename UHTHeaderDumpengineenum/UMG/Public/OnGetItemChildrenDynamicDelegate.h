#pragma once
#include "CoreMinimal.h"
#include "OnGetItemChildrenDynamicDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetItemChildrenDynamic, UObject*, Item, TArray<UObject*>&, Children);

