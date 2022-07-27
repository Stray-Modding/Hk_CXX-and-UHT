#pragma once
#include "CoreMinimal.h"
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=IntegralCurve -FallbackName=IntegralCurve
#include "MovieSceneActorReferenceSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneActorReferenceSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneActorReferenceData ActorReferenceData;
    
    UPROPERTY()
    FIntegralCurve ActorGuidIndexCurve;
    
    UPROPERTY()
    TArray<FString> ActorGuidStrings;
    
public:
    UMovieSceneActorReferenceSection();
};

