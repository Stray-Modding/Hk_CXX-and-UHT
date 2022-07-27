#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimulationStageBase.h"
#include "ENiagaraIterationSource.h"
#include "NiagaraVariableDataInterfaceBinding.h"
#include "NiagaraSimulationStageGeneric.generated.h"

UCLASS()
class NIAGARA_API UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraIterationSource IterationSource;
    
    UPROPERTY(EditAnywhere)
    int32 Iterations;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpawnOnly: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDisablePartialParticleUpdate: 1;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableDataInterfaceBinding DataInterface;
    
    UNiagaraSimulationStageGeneric();
};

