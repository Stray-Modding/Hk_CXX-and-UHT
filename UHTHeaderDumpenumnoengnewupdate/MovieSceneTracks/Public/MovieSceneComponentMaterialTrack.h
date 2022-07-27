#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneComponentMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 MaterialIndex;
    
public:
    UMovieSceneComponentMaterialTrack();
    
    // Fix for true pure virtual functions not being implemented
};

