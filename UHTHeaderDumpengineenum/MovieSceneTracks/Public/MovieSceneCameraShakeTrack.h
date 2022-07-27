#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneCameraShakeTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> CameraShakeSections;
    
public:
    UMovieSceneCameraShakeTrack();
    
    // Fix for true pure virtual functions not being implemented
};

