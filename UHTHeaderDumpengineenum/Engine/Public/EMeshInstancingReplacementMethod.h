#pragma once
#include "CoreMinimal.h"
#include "EMeshInstancingReplacementMethod.generated.h"

UENUM(BlueprintType)
enum class EMeshInstancingReplacementMethod : uint8 {
    RemoveOriginalActors,
    KeepOriginalActorsAsEditorOnly,
};

