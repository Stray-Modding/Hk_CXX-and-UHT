#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerSystemInstanceData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerSystemData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData MaxPerFrameTime;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData AveragePerInstanceTime;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData MaxPerInstanceTime;
    
    NIAGARA_API FNiagaraOutlinerSystemData();
};

