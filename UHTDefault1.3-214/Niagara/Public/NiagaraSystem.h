#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FXSystemAsset -FallbackName=FXSystemAsset
#include "NiagaraSystemCompiledData.h"
#include "NiagaraSystemScalabilityOverride.h"
#include "NiagaraSystemScalabilityOverrides.h"
#include "NiagaraEmitterHandle.h"
#include "NiagaraUserRedirectionParameterStore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraSystem.generated.h"

class UNiagaraEffectType;
class UNiagaraParameterCollectionInstance;
class UNiagaraScript;

UCLASS()
class NIAGARA_API UNiagaraSystem : public UFXSystemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDumpDebugSystemInfo;
    
    UPROPERTY(EditAnywhere)
    bool bDumpDebugEmitterInfo;
    
    UPROPERTY(EditAnywhere)
    bool bRequireCurrentFrameData;
    
    UPROPERTY(EditAnywhere)
    uint8 bFixedBounds: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideScalabilitySettings;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;
    
    UPROPERTY()
    TArray<FNiagaraEmitterHandle> EmitterHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
    
    UPROPERTY()
    UNiagaraScript* SystemSpawnScript;
    
    UPROPERTY()
    UNiagaraScript* SystemUpdateScript;
    
    UPROPERTY()
    FNiagaraSystemCompiledData SystemCompiledData;
    
    UPROPERTY()
    FNiagaraUserRedirectionParameterStore ExposedParameters;
    
    UPROPERTY(EditAnywhere)
    FBox FixedBounds;
    
    UPROPERTY(EditAnywhere)
    bool bAutoDeactivate;
    
    UPROPERTY(EditAnywhere)
    float WarmupTime;
    
    UPROPERTY(EditAnywhere)
    int32 WarmupTickCount;
    
    UPROPERTY(EditAnywhere)
    float WarmupTickDelta;
    
    UPROPERTY()
    bool bHasSystemScriptDIsWithPerInstanceData;
    
    UPROPERTY()
    bool bNeedsGPUContextInitForDataInterfaces;
    
    UPROPERTY()
    TArray<FName> UserDINamesReadInSystemScripts;
    
public:
    UNiagaraSystem();
};

