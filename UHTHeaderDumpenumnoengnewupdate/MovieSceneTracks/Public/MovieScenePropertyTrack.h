#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertyBinding -FallbackName=MovieScenePropertyBinding
#include "MovieScenePropertyTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract)
class MOVIESCENETRACKS_API UMovieScenePropertyTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UMovieSceneSection* SectionToKey;
    
protected:
    UPROPERTY()
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieScenePropertyTrack();
};

