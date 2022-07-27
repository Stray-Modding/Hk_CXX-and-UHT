#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSequenceHierarchy.h"
#include "MovieSceneEntityComponentField.h"
#include "MovieSceneEvaluationTemplate.h"
#include "MovieSceneEvaluationField.h"
#include "MovieSceneCompiledDataManager.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneCompiledDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;
    
    UPROPERTY()
    TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;
    
    UPROPERTY()
    TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;
    
    UPROPERTY()
    TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;
    
public:
    UMovieSceneCompiledDataManager();
};

