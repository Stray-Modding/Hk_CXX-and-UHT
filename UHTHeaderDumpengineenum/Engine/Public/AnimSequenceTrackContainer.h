#pragma once
#include "CoreMinimal.h"
#include "RawAnimSequenceTrack.h"
#include "AnimSequenceTrackContainer.generated.h"

USTRUCT()
struct ENGINE_API FAnimSequenceTrackContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRawAnimSequenceTrack> AnimationTracks;
    
    UPROPERTY()
    TArray<FName> TrackNames;
    
    FAnimSequenceTrackContainer();
};

