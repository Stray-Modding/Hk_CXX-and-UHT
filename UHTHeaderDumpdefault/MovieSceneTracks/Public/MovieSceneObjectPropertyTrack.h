#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneObjectPropertyTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* PropertyClass;
    
    UMovieSceneObjectPropertyTrack();
    
    // Fix for true pure virtual functions not being implemented
};

