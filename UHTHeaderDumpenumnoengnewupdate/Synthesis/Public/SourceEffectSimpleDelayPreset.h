#pragma once
#include "CoreMinimal.h"
#include "SourceEffectSimpleDelaySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectSimpleDelayPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectSimpleDelaySettings Settings;
    
    USourceEffectSimpleDelayPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectSimpleDelaySettings& InSettings);
    
};

