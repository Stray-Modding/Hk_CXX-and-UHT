#pragma once
#include "CoreMinimal.h"
#include "OnPrimaryAssetLoadedDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryAssetLoaded, UObject*, Loaded);

