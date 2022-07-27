#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraEmitterScriptProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EParticleAllocationMode.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraEmitterScalabilityOverrides.h"
#include "NiagaraDetailsLevelScaleOverrides.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraEventScriptProperties.h"
#include "NiagaraEmitter.generated.h"

class UNiagaraSimulationStageBase;
class UNiagaraRendererProperties;
class UNiagaraScript;

UCLASS(MinimalAPI)
class UNiagaraEmitter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bLocalSpace;
    
    UPROPERTY(EditAnywhere)
    bool bDeterminism;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EParticleAllocationMode AllocationMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 PreAllocationCount;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties UpdateScriptProps;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties SpawnScriptProps;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(EditAnywhere)
    FBox FixedBounds;
    
    UPROPERTY()
    int32 MinDetailLevel;
    
    UPROPERTY()
    int32 MaxDetailLevel;
    
    UPROPERTY()
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;
    
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;
    
    UPROPERTY(EditAnywhere)
    uint8 bInterpolatedSpawning: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFixedBounds: 1;
    
    UPROPERTY()
    uint8 bUseMinDetailLevel: 1;
    
    UPROPERTY()
    uint8 bUseMaxDetailLevel: 1;
    
    UPROPERTY()
    uint8 bOverrideGlobalSpawnCountScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCombineEventSpawn: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxDeltaTimePerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 DefaultShaderStageIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 MaxUpdateIterations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSet<uint32> SpawnStages;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSimulationStagesEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDeprecatedShaderStagesEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bLimitDeltaTime: 1;
    
private:
    UPROPERTY()
    FString UniqueEmitterName;
    
    UPROPERTY()
    TArray<UNiagaraRendererProperties*> RendererProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    
    UPROPERTY()
    TArray<UNiagaraSimulationStageBase*> SimulationStages;
    
    UPROPERTY()
    UNiagaraScript* GPUComputeScript;
    
    UPROPERTY()
    TArray<FName> SharedEventGeneratorIds;
    
public:
    UNiagaraEmitter();
};

