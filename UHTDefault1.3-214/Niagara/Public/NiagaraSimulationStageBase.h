#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "NiagaraSimulationStageBase.generated.h"

class UNiagaraScript;

UCLASS()
class NIAGARA_API UNiagaraSimulationStageBase : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraScript* Script;
    
    UPROPERTY(EditAnywhere)
    FName SimulationStageName;
    
    UPROPERTY()
    uint8 bEnabled: 1;
    
    UNiagaraSimulationStageBase();
};

