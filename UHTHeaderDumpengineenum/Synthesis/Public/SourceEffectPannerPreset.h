#pragma once
#include "CoreMinimal.h"
#include "SourceEffectPannerSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectPannerPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectPannerPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectPannerSettings Settings;
    
    USourceEffectPannerPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectPannerSettings& InSettings);
    
};

