#pragma once
#include "CoreMinimal.h"
#include "OnPrimaryAssetClassLoadedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryAssetClassLoaded, UClass*, Loaded);

