#pragma once
#include "CoreMinimal.h"
#include "TimelineFloatTrack.h"
#include "ETimelineLengthMode.h"
#include "TimelineVectorTrack.h"
#include "TimelineEventEntry.h"
#include "TimelineLinearColorTrack.h"
#include "OnTimelineEventDelegate.h"
#include "Timeline.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTimeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NotReplicated)
    TEnumAsByte<ETimelineLengthMode> LengthMode;
    
    UPROPERTY()
    uint8 bLooping: 1;
    
    UPROPERTY()
    uint8 bReversePlayback: 1;
    
    UPROPERTY()
    uint8 bPlaying: 1;
    
    UPROPERTY(NotReplicated)
    float Length;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    float Position;
    
    UPROPERTY(NotReplicated)
    TArray<FTimelineEventEntry> Events;
    
    UPROPERTY(NotReplicated)
    TArray<FTimelineVectorTrack> InterpVectors;
    
    UPROPERTY(NotReplicated)
    TArray<FTimelineFloatTrack> InterpFloats;
    
    UPROPERTY(NotReplicated)
    TArray<FTimelineLinearColorTrack> InterpLinearColors;
    
    UPROPERTY(NotReplicated)
    FOnTimelineEvent TimelinePostUpdateFunc;
    
    UPROPERTY(NotReplicated)
    FOnTimelineEvent TimelineFinishedFunc;
    
    UPROPERTY(NotReplicated)
    TWeakObjectPtr<UObject> PropertySetObject;
    
    UPROPERTY(NotReplicated)
    FName DirectionPropertyName;
    
public:
    ENGINE_API FTimeline();
};

