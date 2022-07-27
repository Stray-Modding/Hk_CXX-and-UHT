#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ENiagaraScriptUsage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraCompileHash -FallbackName=NiagaraCompileHash
#include "NiagaraVMExecutableDataId.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableDataId {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid CompilerVersionID;
    
    UPROPERTY()
    ENiagaraScriptUsage ScriptUsageType;
    
    UPROPERTY()
    FGuid ScriptUsageTypeID;
    
    UPROPERTY()
    uint8 bUsesRapidIterationParams: 1;
    
    UPROPERTY()
    uint8 bInterpolatedSpawn: 1;
    
    UPROPERTY()
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY()
    FGuid BaseScriptID;
    
    UPROPERTY()
    FNiagaraCompileHash BaseScriptCompileHash;
    
    UPROPERTY()
    FGuid ScriptVersionID;
    
    FNiagaraVMExecutableDataId();
};

