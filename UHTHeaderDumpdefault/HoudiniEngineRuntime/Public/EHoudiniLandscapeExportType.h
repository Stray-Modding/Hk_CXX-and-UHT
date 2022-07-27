#pragma once
#include "CoreMinimal.h"
#include "EHoudiniLandscapeExportType.generated.h"

UENUM()
enum class EHoudiniLandscapeExportType : uint8 {
    Heightfield,
    Mesh,
    Points,
};

