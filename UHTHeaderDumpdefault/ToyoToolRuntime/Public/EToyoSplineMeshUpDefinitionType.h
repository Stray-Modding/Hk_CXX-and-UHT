#pragma once
#include "CoreMinimal.h"
#include "EToyoSplineMeshUpDefinitionType.generated.h"

UENUM()
enum class EToyoSplineMeshUpDefinitionType : uint8 {
    SplineUpAverage,
    DefaultValue,
    OldToyoToolMethod,
    Custom,
};

