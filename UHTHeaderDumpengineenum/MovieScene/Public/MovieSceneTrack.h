#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneTrackEvalOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneTrackEvaluationField.h"
#include "MovieSceneTrack.generated.h"

UCLASS(Abstract, DefaultToInstanced, MinimalAPI)
class UMovieSceneTrack : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneTrackEvalOptions EvalOptions;
    
protected:
    UPROPERTY()
    bool bIsEvalDisabled;
    
    UPROPERTY()
    TArray<int32> RowsDisabled;
    
private:
    UPROPERTY()
    FGuid EvaluationFieldGuid;
    
    UPROPERTY()
    FMovieSceneTrackEvaluationField EvaluationField;
    
public:
    UMovieSceneTrack();
};

