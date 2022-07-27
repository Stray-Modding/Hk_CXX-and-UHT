#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRTSettings.h"
#include "ELoudnessNRTCurveTypeEnum.h"
#include "LoudnessNRTSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELoudnessNRTCurveTypeEnum CurveType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float NoiseFloorDb;
    
    ULoudnessNRTSettings();
};

