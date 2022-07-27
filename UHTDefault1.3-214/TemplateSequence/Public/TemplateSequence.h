#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "TemplateSequence.generated.h"

class UMovieScene;
class AActor;

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    TSoftClassPtr<AActor> BoundActorClass;
    
    UPROPERTY()
    TSoftObjectPtr<AActor> BoundPreviewActor;
    
    UPROPERTY()
    TMap<FGuid, FName> BoundActorComponents;
    
    UTemplateSequence();
};

