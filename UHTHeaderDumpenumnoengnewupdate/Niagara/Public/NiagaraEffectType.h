#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCullReaction.h"
#include "NiagaraPerfBaselineStats.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENiagaraScalabilityUpdateFrequency.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraEffectType.generated.h"

class UNiagaraBaselineController;
class UNiagaraSignificanceHandler;

UCLASS(PerObjectConfig, Config=Niagara)
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraSignificanceHandler* SignificanceHandler;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraBaselineController* PerformanceBaselineController;
    
    UPROPERTY(Config)
    FNiagaraPerfBaselineStats PerfBaselineStats;
    
    UPROPERTY(Config)
    FGuid PerfBaselineVersion;
    
public:
    UNiagaraEffectType();
};

