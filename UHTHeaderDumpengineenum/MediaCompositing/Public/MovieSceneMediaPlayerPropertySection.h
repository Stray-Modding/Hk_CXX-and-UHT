#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneMediaPlayerPropertySection.generated.h"

class UMediaSource;

UCLASS(MinimalAPI)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoop;
    
    UMovieSceneMediaPlayerPropertySection();
};

