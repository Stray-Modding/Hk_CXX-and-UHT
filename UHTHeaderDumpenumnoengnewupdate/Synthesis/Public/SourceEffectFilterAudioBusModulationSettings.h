#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterParam.h"
#include "SourceEffectFilterAudioBusModulationSettings.generated.h"

class UAudioBus;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFilterAudioBusModulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAudioBus* AudioBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerAttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerReleaseTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnvelopeGainMultiplier;
    
    UPROPERTY(EditAnywhere)
    ESourceEffectFilterParam FilterParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFrequencyModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFrequencyModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinResonanceModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxResonanceModulation;
    
    FSourceEffectFilterAudioBusModulationSettings();
};

