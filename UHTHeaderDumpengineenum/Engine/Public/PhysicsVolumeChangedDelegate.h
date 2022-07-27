#pragma once
#include "CoreMinimal.h"
#include "PhysicsVolumeChangedDelegate.generated.h"

class APhysicsVolume;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FPhysicsVolumeChanged, APhysicsVolume*, NewVolume);

