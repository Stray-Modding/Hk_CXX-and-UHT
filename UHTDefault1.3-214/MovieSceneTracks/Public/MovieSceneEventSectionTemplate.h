#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneEventSectionData.h"
#include "MovieSceneEventSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEventSectionData EventData;
    
    UPROPERTY()
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY()
    uint8 bFireEventsWhenBackwards: 1;
    
    MOVIESCENETRACKS_API FMovieSceneEventSectionTemplate();
};

