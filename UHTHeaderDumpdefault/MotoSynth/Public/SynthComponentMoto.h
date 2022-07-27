#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "MotoSynthRuntimeSettings.h"
#include "SynthComponentMoto.generated.h"

class UMotoSynthPreset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTOSYNTH_API USynthComponentMoto : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMotoSynthPreset* MotoSynthPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RPM;
    
    USynthComponentMoto();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FMotoSynthRuntimeSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetRPM(float InRPM, float InTimeSec);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
    
};

