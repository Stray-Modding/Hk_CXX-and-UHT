#pragma once
#include "CoreMinimal.h"
#include "XRDeviceOnDisconnectDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FXRDeviceOnDisconnectDelegate, const FString&, OutReason);

