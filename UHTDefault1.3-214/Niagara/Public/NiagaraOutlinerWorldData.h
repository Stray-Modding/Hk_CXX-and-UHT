#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerSystemData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerWorldData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerWorldData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FString, FNiagaraOutlinerSystemData> Systems;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasBegunPlay;
    
    UPROPERTY(VisibleAnywhere)
    uint8 WorldType;
    
    UPROPERTY(VisibleAnywhere)
    uint8 NetMode;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData MaxPerFrameTime;
    
    NIAGARA_API FNiagaraOutlinerWorldData();
};

