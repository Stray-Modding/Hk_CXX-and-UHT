#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "EventPayload.h"
#include "MovieSceneEventSectionData.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneEventSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FEventPayload> KeyValues;
    
public:
    FMovieSceneEventSectionData();
};

