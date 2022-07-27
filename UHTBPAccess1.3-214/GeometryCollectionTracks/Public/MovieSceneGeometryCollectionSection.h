#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneGeometryCollectionParams.h"
#include "MovieSceneGeometryCollectionSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGeometryCollectionParams Params;
    
    UMovieSceneGeometryCollectionSection();
};

