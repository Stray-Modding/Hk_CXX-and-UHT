#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectMidSideSpreaderSettings.h"
#include "SourceEffectMidSideSpreaderPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectMidSideSpreaderSettings Settings;
    
    USourceEffectMidSideSpreaderPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectMidSideSpreaderSettings& InSettings);
    
};

