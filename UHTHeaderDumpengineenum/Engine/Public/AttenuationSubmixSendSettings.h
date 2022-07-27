#pragma once
#include "CoreMinimal.h"
#include "ESubmixSendMethod.h"
#include "RuntimeFloatCurve.h"
#include "AttenuationSubmixSendSettings.generated.h"

class USoundSubmixBase;

USTRUCT(BlueprintType)
struct ENGINE_API FAttenuationSubmixSendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundSubmixBase* Submix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixSendMethod SubmixSendMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SubmixSendLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SubmixSendLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SubmixSendDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SubmixSendDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ManualSubmixSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomSubmixSendCurve;
    
    FAttenuationSubmixSendSettings();
};

