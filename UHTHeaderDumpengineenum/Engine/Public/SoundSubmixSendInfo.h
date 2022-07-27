#pragma once
#include "CoreMinimal.h"
#include "ESendLevelControlMethod.h"
#include "RuntimeFloatCurve.h"
#include "ESubmixSendStage.h"
#include "SoundSubmixSendInfo.generated.h"

class USoundSubmixBase;

USTRUCT(BlueprintType)
struct ENGINE_API FSoundSubmixSendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESendLevelControlMethod SendLevelControlMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixSendStage SendStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundSubmixBase* SoundSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    
    FSoundSubmixSendInfo();
};

