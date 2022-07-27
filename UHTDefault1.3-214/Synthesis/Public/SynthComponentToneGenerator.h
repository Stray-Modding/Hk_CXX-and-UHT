#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "SynthComponentToneGenerator.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API USynthComponentToneGenerator : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Volume;
    
    USynthComponentToneGenerator();
    UFUNCTION(BlueprintCallable)
    void SetVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequency(float InFrequency);
    
};

