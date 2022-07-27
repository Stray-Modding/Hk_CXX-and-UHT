#pragma once
#include "CoreMinimal.h"
#include "ESettingsDOF.generated.h"

UENUM(BlueprintType)
namespace ESettingsDOF {
    enum Type {
        Full3D,
        YZPlane,
        XZPlane,
        XYPlane,
    };
}

