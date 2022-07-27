#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "MovieSceneEnumSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEnumSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneByteChannel EnumCurve;
    
    UMovieSceneEnumSection();
    
    // Fix for true pure virtual functions not being implemented
};

