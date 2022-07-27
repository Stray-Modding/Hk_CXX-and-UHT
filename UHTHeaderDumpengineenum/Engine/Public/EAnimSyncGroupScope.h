#pragma once
#include "CoreMinimal.h"
#include "EAnimSyncGroupScope.generated.h"

UENUM(BlueprintType)
enum class EAnimSyncGroupScope : uint8 {
    Local,
    Component,
};

