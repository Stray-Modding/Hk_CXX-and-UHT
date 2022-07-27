#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRT.h"
#include "LoudnessNRT.generated.h"

class ULoudnessNRTSettings;

UCLASS(EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessNRT : public UAudioSynesthesiaNRT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULoudnessNRTSettings* Settings;
    
    ULoudnessNRT();
    UFUNCTION(BlueprintPure)
    void GetNormalizedLoudnessAtTime(const float InSeconds, float& OutLoudness) const;
    
    UFUNCTION(BlueprintPure)
    void GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness) const;
    
    UFUNCTION(BlueprintPure)
    void GetLoudnessAtTime(const float InSeconds, float& OutLoudness) const;
    
    UFUNCTION(BlueprintPure)
    void GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness) const;
    
};

