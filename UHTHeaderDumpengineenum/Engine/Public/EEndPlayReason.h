#pragma once
#include "CoreMinimal.h"
#include "EEndPlayReason.generated.h"

UENUM(BlueprintType)
namespace EEndPlayReason {
    enum Type {
        Destroyed,
        LevelTransition,
        EndPlayInEditor,
        RemovedFromWorld,
        Quit,
    };
}

