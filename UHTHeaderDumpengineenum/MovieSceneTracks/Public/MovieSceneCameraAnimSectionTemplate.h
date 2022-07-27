#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneCameraAnimSectionData.h"
#include "MovieSceneCameraAnimSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneCameraAnimSectionData SourceData;
    
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraAnimSectionTemplate();
};

