#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneCameraShakeSectionData.h"
#include "MovieSceneCameraShakeSourceShakeSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneCameraShakeSectionData SourceData;
    
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceShakeSectionTemplate();
};

