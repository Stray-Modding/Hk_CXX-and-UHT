#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneRootEvaluationTemplateInstance -FallbackName=MovieSceneRootEvaluationTemplateInstance
#include "UMGSequencePlayer.generated.h"

class UWidgetAnimation;

UCLASS(BlueprintType, Transient)
class UMG_API UUMGSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UWidgetAnimation* Animation;
    
    UPROPERTY()
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
public:
    UUMGSequencePlayer();
    UFUNCTION(BlueprintCallable)
    void SetUserTag(FName InUserTag);
    
    UFUNCTION(BlueprintPure)
    FName GetUserTag() const;
    
};

