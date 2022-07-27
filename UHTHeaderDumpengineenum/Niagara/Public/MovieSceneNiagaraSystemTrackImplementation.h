#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackImplementation -FallbackName=MovieSceneTrackImplementation
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
#include "ENiagaraAgeUpdateMode.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "MovieSceneNiagaraSystemTrackImplementation.generated.h"

USTRUCT()
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FFrameNumber SpawnSectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SpawnSectionEndFrame;
    
    UPROPERTY()
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    
    UPROPERTY()
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    
    UPROPERTY()
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    
    UPROPERTY()
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackImplementation();
};

