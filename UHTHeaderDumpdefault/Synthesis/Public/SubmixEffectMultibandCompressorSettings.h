#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsPeakMode -FallbackName=ESubmixEffectDynamicsPeakMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsProcessorType -FallbackName=ESubmixEffectDynamicsProcessorType
#include "DynamicsBandSettings.h"
#include "SubmixEffectMultibandCompressorSettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectMultibandCompressorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLinkChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnalogMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFourPole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDynamicsBandSettings> Bands;
    
    SYNTHESIS_API FSubmixEffectMultibandCompressorSettings();
};

