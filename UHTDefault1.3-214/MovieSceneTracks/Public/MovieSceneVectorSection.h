#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneVectorSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneVectorSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel Curves[4];
    
    UPROPERTY()
    int32 ChannelsUsed;
    
public:
    UMovieSceneVectorSection();
    
    // Fix for true pure virtual functions not being implemented
};

