#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectWaveShaperSettings.h"
#include "SourceEffectWaveShaperPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectWaveShaperPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectWaveShaperSettings Settings;
    
    USourceEffectWaveShaperPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectWaveShaperSettings& InSettings);
    
};

