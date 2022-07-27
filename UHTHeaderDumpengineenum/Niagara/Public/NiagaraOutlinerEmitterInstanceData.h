#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.h"
#include "ENiagaraExecutionState.h"
#include "NiagaraOutlinerEmitterInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerEmitterInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString EmitterName;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraExecutionState ExecState;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumParticles;
    
    NIAGARA_API FNiagaraOutlinerEmitterInstanceData();
};

