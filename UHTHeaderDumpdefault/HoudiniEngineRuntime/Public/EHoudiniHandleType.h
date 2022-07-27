#pragma once
#include "CoreMinimal.h"
#include "EHoudiniHandleType.generated.h"

UENUM()
enum class EHoudiniHandleType : uint8 {
    Xform,
    Bounder,
    Unsupported,
};

