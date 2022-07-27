#pragma once
#include "CoreMinimal.h"
#include "TrackablePlaneDelegateDelegate.generated.h"

class UARPlaneGeometry;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackablePlaneDelegate, UARPlaneGeometry*, TrackedPlane);

