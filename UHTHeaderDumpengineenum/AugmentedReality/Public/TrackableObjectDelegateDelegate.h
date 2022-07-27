#pragma once
#include "CoreMinimal.h"
#include "TrackableObjectDelegateDelegate.generated.h"

class UARTrackedObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackableObjectDelegate, UARTrackedObject*, TrackedObject);

