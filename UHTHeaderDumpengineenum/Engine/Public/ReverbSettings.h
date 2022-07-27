#pragma once
#include "CoreMinimal.h"
#include "ReverbSettings.generated.h"

class UReverbEffect;
class USoundEffectSubmixPreset;

USTRUCT(BlueprintType)
struct FReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UReverbEffect* ReverbEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundEffectSubmixPreset* ReverbPluginEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeTime;
    
    ENGINE_API FReverbSettings();
};

