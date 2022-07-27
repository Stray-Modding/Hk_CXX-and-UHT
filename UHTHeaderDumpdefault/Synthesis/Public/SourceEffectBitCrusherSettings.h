#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundModulationDestinationSettings -FallbackName=SoundModulationDestinationSettings
#include "SourceEffectBitCrusherSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectBitCrusherSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float CrushedSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings SampleRateModulation;
    
    UPROPERTY()
    float CrushedBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings BitModulation;
    
    FSourceEffectBitCrusherSettings();
};

