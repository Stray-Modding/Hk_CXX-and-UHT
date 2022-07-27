#pragma once
#include "CoreMinimal.h"
#include "OnTimelineEventDelegate.h"
#include "TimelineEventEntry.generated.h"

USTRUCT(BlueprintType)
struct FTimelineEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    FOnTimelineEvent EventFunc;
    
    ENGINE_API FTimelineEventEntry();
};

