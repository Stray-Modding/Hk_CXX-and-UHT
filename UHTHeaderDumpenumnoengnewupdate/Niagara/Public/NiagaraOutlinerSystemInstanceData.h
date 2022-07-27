#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityState.h"
#include "NiagaraOutlinerEmitterInstanceData.h"
#include "ENCPoolMethod.h"
#include "ENiagaraExecutionState.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerSystemInstanceData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraOutlinerSystemInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ComponentName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraExecutionState ActualExecutionState;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraExecutionState RequestedExecutionState;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraScalabilityState ScalabilityState;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bPendingKill: 1;
    
    UPROPERTY(VisibleAnywhere)
    ENCPoolMethod PoolMethod;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData AverageTime;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData MaxTime;
    
    FNiagaraOutlinerSystemInstanceData();
};

