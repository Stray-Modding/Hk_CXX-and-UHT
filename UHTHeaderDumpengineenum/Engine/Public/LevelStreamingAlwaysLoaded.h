#pragma once
#include "CoreMinimal.h"
#include "LevelStreaming.h"
#include "LevelStreamingAlwaysLoaded.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming {
    GENERATED_BODY()
public:
    ULevelStreamingAlwaysLoaded();
};

