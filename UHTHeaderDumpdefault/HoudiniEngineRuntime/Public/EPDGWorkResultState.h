#pragma once
#include "CoreMinimal.h"
#include "EPDGWorkResultState.generated.h"

UENUM()
enum class EPDGWorkResultState : uint8 {
    None,
    ToLoad,
    Loading,
    Loaded,
    ToDelete,
    Deleting,
    Deleted,
    NotLoaded,
};

