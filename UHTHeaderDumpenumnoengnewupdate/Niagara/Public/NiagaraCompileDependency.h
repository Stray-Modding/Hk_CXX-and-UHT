#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraVariableBase.h"
#include "NiagaraCompileDependency.generated.h"

USTRUCT()
struct FNiagaraCompileDependency {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LinkerErrorMessage;
    
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY()
    FGuid PinGuid;
    
    UPROPERTY()
    TArray<FGuid> StackGuids;
    
    UPROPERTY()
    FNiagaraVariableBase DependentVariable;
    
    NIAGARA_API FNiagaraCompileDependency();
};

