#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneMediaPlayerPropertySectionTemplate.generated.h"

class UMediaSource;

USTRUCT()
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMediaSource* MediaSource;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    bool bLoop;
    
public:
    MEDIACOMPOSITING_API FMovieSceneMediaPlayerPropertySectionTemplate();
};

