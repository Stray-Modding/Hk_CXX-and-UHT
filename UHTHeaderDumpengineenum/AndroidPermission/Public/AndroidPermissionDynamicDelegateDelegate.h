#pragma once
#include "CoreMinimal.h"
#include "AndroidPermissionDynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAndroidPermissionDynamicDelegate, const TArray<FString>&, Permissions, const TArray<bool>&, GrantResults);

