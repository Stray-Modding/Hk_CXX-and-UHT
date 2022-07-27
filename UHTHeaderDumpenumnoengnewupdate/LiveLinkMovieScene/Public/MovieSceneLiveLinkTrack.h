#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneLiveLinkTrack.generated.h"

class ULiveLinkRole;

UCLASS(MinimalAPI)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<ULiveLinkRole> TrackRole;
    
public:
    UMovieSceneLiveLinkTrack();
    
    // Fix for true pure virtual functions not being implemented
};

