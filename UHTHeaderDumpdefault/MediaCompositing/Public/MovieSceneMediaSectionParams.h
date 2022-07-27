#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneMediaSectionParams.generated.h"

class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;
class UMediaPlayer;

USTRUCT(BlueprintType)
struct FMovieSceneMediaSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMediaSoundComponent* MediaSoundComponent;
    
    UPROPERTY()
    UMediaSource* MediaSource;
    
    UPROPERTY()
    UMediaTexture* MediaTexture;
    
    UPROPERTY()
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SectionEndFrame;
    
    UPROPERTY()
    bool bLooping;
    
    UPROPERTY()
    FFrameNumber StartFrameOffset;
    
    MEDIACOMPOSITING_API FMovieSceneMediaSectionParams();
};

