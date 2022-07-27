#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectSubmixEQSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectSubmixEQPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectSubmixEQSettings Settings;
    
    USubmixEffectSubmixEQPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
    
};

