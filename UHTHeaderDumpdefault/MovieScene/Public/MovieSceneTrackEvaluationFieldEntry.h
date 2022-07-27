#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumberRange -FallbackName=FrameNumberRange
#include "ESectionEvaluationFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTrackEvaluationFieldEntry.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneTrackEvaluationFieldEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneSection* Section;
    
    UPROPERTY()
    FFrameNumberRange Range;
    
    UPROPERTY()
    FFrameNumber ForcedTime;
    
    UPROPERTY()
    ESectionEvaluationFlags Flags;
    
    UPROPERTY()
    int16 LegacySortOrder;
    
    MOVIESCENE_API FMovieSceneTrackEvaluationFieldEntry();
};

