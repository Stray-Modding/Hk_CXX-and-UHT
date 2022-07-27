#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneCameraShakeSectionData.h"
#include "MovieSceneCameraShakeSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneCameraShakeSectionData SourceData;
    
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSectionTemplate();
};

