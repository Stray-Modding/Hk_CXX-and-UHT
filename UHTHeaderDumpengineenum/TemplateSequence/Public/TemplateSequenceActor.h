#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceActor -FallbackName=MovieSceneSequenceActor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePlaybackClient -FallbackName=MovieScenePlaybackClient
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "TemplateSequenceBindingOverrideData.h"
#include "TemplateSequenceActor.generated.h"

class UTemplateSequence;
class UTemplateSequencePlayer;

UCLASS()
class TEMPLATESEQUENCE_API ATemplateSequenceActor : public AActor, public IMovieSceneSequenceActor, public IMovieScenePlaybackClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated, Transient)
    UTemplateSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath TemplateSequence;
    
    UPROPERTY(BlueprintReadOnly)
    FTemplateSequenceBindingOverrideData BindingOverride;
    
    ATemplateSequenceActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(UTemplateSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetBinding(AActor* Actor, bool bOverridesDefault);
    
    UFUNCTION(BlueprintPure)
    UTemplateSequence* LoadSequence() const;
    
    UFUNCTION(BlueprintPure)
    UTemplateSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintPure)
    UTemplateSequence* GetSequence() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

