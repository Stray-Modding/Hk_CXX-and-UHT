#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptUsage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraScriptBase -FallbackName=NiagaraScriptBase
#include "NiagaraBoundParameter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraParameterStore.h"
#include "NiagaraScriptExecutionParameterStore.h"
#include "NiagaraVMExecutableDataId.h"
#include "NiagaraVMExecutableData.h"
#include "NiagaraScriptDataInterfaceInfo.h"
#include "NiagaraScript.generated.h"

class UNiagaraParameterCollection;

UCLASS(MinimalAPI)
class UNiagaraScript : public UNiagaraScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    ENiagaraScriptUsage Usage;
    
private:
    UPROPERTY()
    FGuid UsageId;
    
public:
    UPROPERTY()
    FNiagaraParameterStore RapidIterationParameters;
    
private:
    UPROPERTY()
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    
    UPROPERTY()
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    
    UPROPERTY()
    FNiagaraVMExecutableDataId CachedScriptVMId;
    
    UPROPERTY()
    FNiagaraVMExecutableData CachedScriptVM;
    
    UPROPERTY()
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
    
public:
    UNiagaraScript();
    UFUNCTION()
    void RaiseOnGPUCompilationComplete();
    
};

