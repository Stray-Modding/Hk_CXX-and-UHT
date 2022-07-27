#pragma once
#include "CoreMinimal.h"
#include "SourceEffectStereoDelaySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectStereoDelayPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectStereoDelayPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectStereoDelaySettings Settings;
    
    USourceEffectStereoDelayPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectStereoDelaySettings& InSettings);
    
};

