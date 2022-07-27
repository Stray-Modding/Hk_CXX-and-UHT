#pragma once
#include "CoreMinimal.h"
#include "EHoudiniFolderParameterType.generated.h"

UENUM()
enum class EHoudiniFolderParameterType : uint8 {
    Invalid,
    Collapsible,
    Simple,
    Tabs,
    Radio,
    Other,
};

