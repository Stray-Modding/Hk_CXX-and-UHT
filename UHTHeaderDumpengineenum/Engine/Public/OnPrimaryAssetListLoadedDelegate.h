#pragma once
#include "CoreMinimal.h"
#include "OnPrimaryAssetListLoadedDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryAssetListLoaded, const TArray<UObject*>&, Loaded);

