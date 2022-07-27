#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapARPinType.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapARPinType : uint8 {
    SingleUserSingleSession,
    SingleUserMultiSession,
    MultiUserMultiSession,
};

