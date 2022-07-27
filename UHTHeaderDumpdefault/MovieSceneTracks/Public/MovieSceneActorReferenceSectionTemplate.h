#pragma once
#include "CoreMinimal.h"
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionData -FallbackName=MovieScenePropertySectionData
#include "MovieSceneActorReferenceSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieScenePropertySectionData PropertyData;
    
    UPROPERTY()
    FMovieSceneActorReferenceData ActorReferenceData;
    
public:
    MOVIESCENETRACKS_API FMovieSceneActorReferenceSectionTemplate();
};

