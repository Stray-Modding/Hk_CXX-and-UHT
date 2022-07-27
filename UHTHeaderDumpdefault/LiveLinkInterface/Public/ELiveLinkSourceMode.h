#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkSourceMode.generated.h"

UENUM()
enum class ELiveLinkSourceMode : uint8 {
    Latest,
    EngineTime,
    Timecode,
};

