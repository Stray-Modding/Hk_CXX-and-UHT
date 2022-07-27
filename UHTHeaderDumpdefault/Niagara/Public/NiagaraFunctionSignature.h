#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraFunctionSignature.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraFunctionSignature {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Inputs;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Outputs;
    
    UPROPERTY()
    FName OwnerName;
    
    UPROPERTY()
    uint8 bRequiresContext: 1;
    
    UPROPERTY()
    uint8 bRequiresExecPin: 1;
    
    UPROPERTY()
    uint8 bMemberFunction: 1;
    
    UPROPERTY()
    uint8 bExperimental: 1;
    
    UPROPERTY()
    uint8 bSupportsCPU: 1;
    
    UPROPERTY()
    uint8 bSupportsGPU: 1;
    
    UPROPERTY()
    uint8 bWriteFunction: 1;
    
    UPROPERTY()
    uint8 bSoftDeprecatedFunction: 1;
    
    UPROPERTY()
    uint8 bIsCompileTagGenerator: 1;
    
    UPROPERTY(Transient)
    uint8 bHidden: 1;
    
    UPROPERTY()
    int32 ModuleUsageBitmask;
    
    UPROPERTY()
    int32 ContextStageMinIndex;
    
    UPROPERTY()
    int32 ContextStageMaxIndex;
    
    UPROPERTY()
    TMap<FName, FName> FunctionSpecifiers;
    
    FNiagaraFunctionSignature();
};

