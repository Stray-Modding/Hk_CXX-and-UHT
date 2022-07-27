#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraParameterCollection.generated.h"

class UMaterialParameterCollection;
class UNiagaraParameterCollectionInstance;

UCLASS()
class NIAGARA_API UNiagaraParameterCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName Namespace;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Parameters;
    
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* SourceMaterialCollection;
    
    UPROPERTY()
    UNiagaraParameterCollectionInstance* DefaultInstance;
    
    UPROPERTY()
    FGuid CompileId;
    
public:
    UNiagaraParameterCollection();
};

