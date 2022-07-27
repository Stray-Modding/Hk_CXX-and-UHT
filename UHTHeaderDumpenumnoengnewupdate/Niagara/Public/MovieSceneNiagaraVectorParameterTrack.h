#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraVectorParameterTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 ChannelsUsed;
    
public:
    UMovieSceneNiagaraVectorParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

