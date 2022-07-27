#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptCompileStatus.h"
#include "VMExternalFunctionBindingInfo.h"
#include "NiagaraCompilerTag.h"
#include "NiagaraVariable.h"
#include "NiagaraScriptDataUsageInfo.h"
#include "NiagaraScriptDataInterfaceCompileInfo.h"
#include "NiagaraStatScope.h"
#include "NiagaraDataSetID.h"
#include "NiagaraDataSetProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraDataInterfaceGPUParamInfo -FallbackName=NiagaraDataInterfaceGPUParamInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=SimulationStageMetaData -FallbackName=SimulationStageMetaData
#include "NiagaraVMExecutableData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ByteCode;
    
    UPROPERTY(Transient)
    TArray<uint8> OptimizedByteCode;
    
    UPROPERTY()
    int32 NumTempRegisters;
    
    UPROPERTY()
    int32 NumUserPtrs;
    
    UPROPERTY()
    TArray<FNiagaraCompilerTag> CompileTags;
    
    UPROPERTY()
    TArray<uint8> ScriptLiterals;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Attributes;
    
    UPROPERTY()
    FNiagaraScriptDataUsageInfo DataUsage;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    
    UPROPERTY()
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    
    UPROPERTY()
    TArray<FNiagaraDataSetID> ReadDataSets;
    
    UPROPERTY()
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    
    UPROPERTY()
    TArray<FNiagaraStatScope> StatScopes;
    
    UPROPERTY()
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;
    
    UPROPERTY()
    ENiagaraScriptCompileStatus LastCompileStatus;
    
    UPROPERTY()
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    
    UPROPERTY()
    uint8 bReadsSignificanceIndex: 1;
    
    UPROPERTY()
    uint8 bNeedsGPUContextInit: 1;
    
    FNiagaraVMExecutableData();
};

