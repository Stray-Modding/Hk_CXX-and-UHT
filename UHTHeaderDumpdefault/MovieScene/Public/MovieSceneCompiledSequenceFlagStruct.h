#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCompiledSequenceFlagStruct.generated.h"

USTRUCT()
struct FMovieSceneCompiledSequenceFlagStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bParentSequenceRequiresLowerFence: 1;
    
    UPROPERTY()
    uint8 bParentSequenceRequiresUpperFence: 1;
    
    MOVIESCENE_API FMovieSceneCompiledSequenceFlagStruct();
};

