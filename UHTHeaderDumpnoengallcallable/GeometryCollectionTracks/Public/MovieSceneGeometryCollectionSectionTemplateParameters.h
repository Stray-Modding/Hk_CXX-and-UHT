#pragma once
#include "CoreMinimal.h"
#include "MovieSceneGeometryCollectionParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneGeometryCollectionSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionEndTime;
    
    GEOMETRYCOLLECTIONTRACKS_API FMovieSceneGeometryCollectionSectionTemplateParameters();
};

