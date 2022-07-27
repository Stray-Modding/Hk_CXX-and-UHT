#pragma once
#include "CoreMinimal.h"
#include "NiagaraSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite)
    float InterpStartDt;
    
    UPROPERTY(BlueprintReadWrite)
    float IntervalDt;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SpawnGroup;
    
    NIAGARA_API FNiagaraSpawnInfo();
};

