#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "OnForceFeedbackFinishedDelegate.h"
#include "ForceFeedbackAttenuationSettings.h"
#include "ForceFeedbackComponent.generated.h"

class UForceFeedbackEffect;
class UForceFeedbackAttenuation;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UForceFeedbackComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreTimeDilation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UForceFeedbackAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FForceFeedbackAttenuationSettings AttenuationOverrides;
    
    UPROPERTY(BlueprintAssignable)
    FOnForceFeedbackFinished OnForceFeedbackFinished;
    
    UForceFeedbackComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetIntensityMultiplier(float NewIntensityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintPure)
    bool BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings) const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustAttenuation(const FForceFeedbackAttenuationSettings& InAttenuationSettings);
    
};

