#pragma once
#include "CoreMinimal.h"
#include "ESourceBusSendLevelControlMethod.h"
#include "RuntimeFloatCurve.h"
#include "SoundSourceBusSendInfo.generated.h"

class USoundSourceBus;
class UAudioBus;

USTRUCT(BlueprintType)
struct ENGINE_API FSoundSourceBusSendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod;
    
    UPROPERTY(EditAnywhere)
    USoundSourceBus* SoundSourceBus;
    
    UPROPERTY(EditAnywhere)
    UAudioBus* AudioBus;
    
    UPROPERTY(EditAnywhere)
    float SendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSendDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSendDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomSendLevelCurve;
    
    FSoundSourceBusSendInfo();
};

