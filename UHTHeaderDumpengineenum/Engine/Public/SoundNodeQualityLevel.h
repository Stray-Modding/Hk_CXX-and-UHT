#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeQualityLevel.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeQualityLevel : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CookedQualityLevelIndex;
    
    USoundNodeQualityLevel();
};

