#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "ENiagaraAgeUpdateMode.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "MovieSceneNiagaraSystemSpawnSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    UMovieSceneNiagaraSystemSpawnSection();
};

