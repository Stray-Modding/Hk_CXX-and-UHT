#pragma once
#include "CoreMinimal.h"
#include "SourceEffectRingModulationSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectRingModulationPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectRingModulationPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectRingModulationSettings Settings;
    
    USourceEffectRingModulationPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectRingModulationSettings& InSettings);
    
};

