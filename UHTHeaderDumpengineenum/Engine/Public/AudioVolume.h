#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "InteriorSettings.h"
#include "ReverbSettings.h"
#include "AudioVolumeSubmixSendSettings.h"
#include "AudioVolumeSubmixOverrideSettings.h"
#include "AudioVolume.generated.h"

UCLASS()
class ENGINE_API AAudioVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReverbSettings Settings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorSettings AmbientZoneSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;
    
public:
    AAudioVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixSendSettings(const TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixOverrideSettings(const TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbSettings(const FReverbSettings& NewReverbSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(float NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetInteriorSettings(const FInteriorSettings& NewInteriorSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
private:
    UFUNCTION()
    void OnRep_bEnabled();
    
};

