#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationTemplateSerialNumber.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneEvaluationTrack.h"
#include "MovieSceneTemplateGenerationLedger.h"
#include "MovieSceneEvaluationTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;
    
public:
    UPROPERTY()
    FGuid SequenceSignature;
    
    UPROPERTY()
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
    
private:
    UPROPERTY()
    FMovieSceneTemplateGenerationLedger TemplateLedger;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTemplate();
};

