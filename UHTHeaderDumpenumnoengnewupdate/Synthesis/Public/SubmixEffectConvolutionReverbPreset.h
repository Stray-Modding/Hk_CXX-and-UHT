#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectConvolutionReverbBlockSize.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectConvolutionReverbSettings.h"
#include "SubmixEffectConvolutionReverbPreset.generated.h"

class UAudioImpulseResponse;

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectConvolutionReverbSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ESubmixEffectConvolutionReverbBlockSize BlockSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bEnableHardwareAcceleration;
    
    USubmixEffectConvolutionReverbPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
    
};

