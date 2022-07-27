#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinitionHandle.h"
#include "NiagaraVariableBase.generated.h"

USTRUCT()
struct FNiagaraVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FNiagaraTypeDefinitionHandle TypeDefHandle;
    
public:
    NIAGARA_API FNiagaraVariableBase();
};

