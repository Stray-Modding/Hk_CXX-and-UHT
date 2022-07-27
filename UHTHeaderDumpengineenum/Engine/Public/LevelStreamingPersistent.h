#pragma once
#include "CoreMinimal.h"
#include "LevelStreaming.h"
#include "LevelStreamingPersistent.generated.h"

UCLASS(EditInlineNew, Transient)
class ENGINE_API ULevelStreamingPersistent : public ULevelStreaming {
    GENERATED_BODY()
public:
    ULevelStreamingPersistent();
};

