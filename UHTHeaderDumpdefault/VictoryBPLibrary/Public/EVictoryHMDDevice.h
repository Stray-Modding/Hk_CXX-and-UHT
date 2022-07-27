#pragma once
#include "CoreMinimal.h"
#include "EVictoryHMDDevice.generated.h"

UENUM()
enum class EVictoryHMDDevice {
    None,
    OculusRift,
    Morpheus,
    ES2GenericStereoMesh,
    SteamVR,
    GearVR,
};

