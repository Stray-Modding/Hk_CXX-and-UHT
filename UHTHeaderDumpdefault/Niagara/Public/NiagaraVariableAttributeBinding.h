#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariable.h"
#include "ENiagaraBindingSource.h"
#include "NiagaraVariableAttributeBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableAttributeBinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FNiagaraVariableBase ParamMapVariable;
    
    UPROPERTY()
    FNiagaraVariable DataSetVariable;
    
    UPROPERTY()
    FNiagaraVariable RootVariable;
    
    UPROPERTY()
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;
    
    UPROPERTY()
    uint8 bBindingExistsOnSource: 1;
    
    UPROPERTY()
    uint8 bIsCachedParticleValue: 1;
    
public:
    NIAGARA_API FNiagaraVariableAttributeBinding();
};

