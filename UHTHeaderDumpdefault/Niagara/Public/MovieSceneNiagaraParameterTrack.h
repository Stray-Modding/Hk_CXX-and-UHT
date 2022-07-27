#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "MovieSceneNiagaraTrack.h"
#include "MovieSceneNiagaraParameterTrack.generated.h"

UCLASS(Abstract, MinimalAPI)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FNiagaraVariable Parameter;
    
public:
    UMovieSceneNiagaraParameterTrack();
};

