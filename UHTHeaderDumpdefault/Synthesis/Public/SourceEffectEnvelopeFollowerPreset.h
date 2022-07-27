#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectEnvelopeFollowerSettings.h"
#include "SourceEffectEnvelopeFollowerPreset.generated.h"

class UEnvelopeFollowerListener;

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectEnvelopeFollowerSettings Settings;
    
    USourceEffectEnvelopeFollowerPreset();
    UFUNCTION(BlueprintCallable)
    void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectEnvelopeFollowerSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
    
};

