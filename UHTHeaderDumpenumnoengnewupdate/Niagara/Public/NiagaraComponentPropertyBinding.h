#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraVariable.h"
#include "NiagaraComponentPropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraComponentPropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraVariableAttributeBinding AttributeBinding;
    
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FNiagaraTypeDefinition PropertyType;
    
    UPROPERTY()
    FName MetadataSetterName;
    
    UPROPERTY()
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    UPROPERTY(Transient)
    FNiagaraVariable WritableValue;
    
    NIAGARA_API FNiagaraComponentPropertyBinding();
};

