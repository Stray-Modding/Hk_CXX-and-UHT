#pragma once
#include "CoreMinimal.h"
#include "EStereoDelaySourceEffect.h"
#include "EStereoDelayFiltertype.h"
#include "SubmixEffectStereoDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectStereoDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStereoDelaySourceEffect DelayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStereoDelayFiltertype FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    FSubmixEffectStereoDelaySettings();
};

