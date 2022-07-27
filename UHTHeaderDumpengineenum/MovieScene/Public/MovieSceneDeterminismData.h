#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "MovieSceneDeterminismData.generated.h"

USTRUCT()
struct FMovieSceneDeterminismData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFrameTime> Fences;
    
    UPROPERTY()
    bool bParentSequenceRequiresLowerFence;
    
    UPROPERTY()
    bool bParentSequenceRequiresUpperFence;
    
    MOVIESCENE_API FMovieSceneDeterminismData();
};

