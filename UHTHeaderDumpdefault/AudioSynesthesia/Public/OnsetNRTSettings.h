#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRTSettings.h"
#include "OnsetNRTSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOSYNESTHESIA_API UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDownmixToMono;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GranularityInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Sensitivity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumFrequency;
    
    UOnsetNRTSettings();
};

