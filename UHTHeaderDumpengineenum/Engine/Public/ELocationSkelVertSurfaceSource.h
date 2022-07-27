#pragma once
#include "CoreMinimal.h"
#include "ELocationSkelVertSurfaceSource.generated.h"

UENUM(BlueprintType)
enum ELocationSkelVertSurfaceSource {
    VERTSURFACESOURCE_Vert,
    VERTSURFACESOURCE_Surface,
    VERTSURFACESOURCE_MAX UMETA(Hidden),
};

