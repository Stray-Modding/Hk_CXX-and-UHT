#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneMaterialTrack -FallbackName=MovieSceneMaterialTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneWidgetMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FName> BrushPropertyNamePath;
    
    UPROPERTY()
    FName TrackName;
    
public:
    UMovieSceneWidgetMaterialTrack();
    
    // Fix for true pure virtual functions not being implemented
};

