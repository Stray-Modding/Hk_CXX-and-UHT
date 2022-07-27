#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRT.h"
#include "OnsetNRT.generated.h"

class UOnsetNRTSettings;

UCLASS(EditInlineNew)
class AUDIOSYNESTHESIA_API UOnsetNRT : public UAudioSynesthesiaNRT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UOnsetNRTSettings* Settings;
    
    UOnsetNRT();
    UFUNCTION(BlueprintPure)
    void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const;
    
    UFUNCTION(BlueprintPure)
    void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const;
    
};

