#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneCameraShakeSourceTrigger.h"
#include "MovieSceneCameraShakeSourceTriggerSectionTemplate.generated.h"

USTRUCT()
struct MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> TriggerTimes;
    
    UPROPERTY()
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;
    
public:
    FMovieSceneCameraShakeSourceTriggerSectionTemplate();
};

