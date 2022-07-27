#pragma once
#include "CoreMinimal.h"
#include "EImportanceLevel.generated.h"

UENUM(BlueprintType)
enum EImportanceLevel {
    IL_Off,
    IL_Lowest,
    IL_Low,
    IL_Normal,
    IL_High,
    IL_Highest,
    TEMP_BROKEN2,
};

