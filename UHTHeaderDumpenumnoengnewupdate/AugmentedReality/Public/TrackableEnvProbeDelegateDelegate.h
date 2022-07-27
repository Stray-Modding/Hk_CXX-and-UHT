#pragma once
#include "CoreMinimal.h"
#include "TrackableEnvProbeDelegateDelegate.generated.h"

class UAREnvironmentCaptureProbe;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrackableEnvProbeDelegate, UAREnvironmentCaptureProbe*, TrackedEnvProbe);

