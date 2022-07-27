#pragma once
#include "CoreMinimal.h"
#include "AudioComponentParam.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FAudioComponentParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BoolParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWaveParam;
    
    ENGINE_API FAudioComponentParam();
};

