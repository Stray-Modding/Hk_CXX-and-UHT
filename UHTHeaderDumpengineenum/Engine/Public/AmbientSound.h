#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "AmbientSound.generated.h"

class UAudioComponent;

UCLASS()
class ENGINE_API AAmbientSound : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    AAmbientSound();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
    
};

