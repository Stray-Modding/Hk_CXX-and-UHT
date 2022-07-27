#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneSkeletalAnimRootMotionTrackParams.h"
#include "MovieSceneSkeletalAnimationTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY()
    bool bUseLegacySectionIndexBlend;
    
    UPROPERTY()
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;
    
    UPROPERTY(EditAnywhere)
    bool bBlendFirstChildOfRoot;
    
    UMovieSceneSkeletalAnimationTrack();
    
    // Fix for true pure virtual functions not being implemented
};

