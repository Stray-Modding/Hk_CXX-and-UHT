#pragma once
#include "CoreMinimal.h"
#include "DeviceModelLoadedDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeviceModelLoadedDelegate, const UPrimitiveComponent*, LoadedComponent);

