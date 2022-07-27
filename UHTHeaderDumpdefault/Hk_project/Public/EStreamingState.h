#pragma once
#include "CoreMinimal.h"
#include "EStreamingState.generated.h"

UENUM()
enum EStreamingState {
    StreamingState_Removed,
    StreamingState_Unloaded,
    StreamingState_LoadingLevel,
    StreamingState_LoadingSaveGame,
    StreamingState_WaitDependencies,
    StreamingState_Loaded,
    StreamingState_MAX UMETA(Hidden),
};

