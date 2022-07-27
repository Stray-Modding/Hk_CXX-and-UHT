#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneRootEvaluationTemplateInstance -FallbackName=MovieSceneRootEvaluationTemplateInstance
#include "SequenceCameraShakeSequencePlayer.generated.h"

class UMovieSceneSequence;

UCLASS()
class USequenceCameraShakeSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* BoundObjectOverride;
    
    UPROPERTY(Transient)
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(Transient)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
public:
    USequenceCameraShakeSequencePlayer();
};

