#pragma once
#include "CoreMinimal.h"
#include "NiagaraBaselineController.h"
#include "NiagaraBaselineController_Basic.generated.h"

class UNiagaraComponent;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraBaselineController_Basic : public UNiagaraBaselineController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 NumInstances;
    
    UPROPERTY(Export)
    TArray<UNiagaraComponent*> SpawnedComponents;
    
public:
    UNiagaraBaselineController_Basic();
};

