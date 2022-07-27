#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHudVerbosity.h"
#include "ENiagaraDebugHudFont.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraDebugHUDVariable.h"
#include "NiagaraDebugHudTextOptions.h"
#include "ENiagaraDebugPlaybackMode.h"
#include "NiagaraDebugHUDSettingsData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraDebugHUDSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bValidateSystemSimulationDataBuffers;
    
    UPROPERTY(EditAnywhere)
    bool bValidateParticleDataBuffers;
    
    UPROPERTY(EditAnywhere)
    bool bOverviewEnabled;
    
    UPROPERTY(EditAnywhere)
    ENiagaraDebugHudFont OverviewFont;
    
    UPROPERTY(EditAnywhere)
    FVector2D OverviewLocation;
    
    UPROPERTY(Config, EditAnywhere)
    FString ActorFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bComponentFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FString ComponentFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSystemFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FString SystemFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEmitterFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FString EmitterFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bActorFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHudVerbosity SystemDebugVerbosity;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHudVerbosity SystemEmitterVerbosity;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSystemShowBounds;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSystemShowActiveOnlyInWorld;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowSystemVariables;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNiagaraDebugHUDVariable> SystemVariables;
    
    UPROPERTY(Config, EditAnywhere)
    FNiagaraDebugHudTextOptions SystemTextOptions;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowParticleVariables;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableGpuParticleReadback;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNiagaraDebugHUDVariable> ParticlesVariables;
    
    UPROPERTY(Config, EditAnywhere)
    FNiagaraDebugHudTextOptions ParticleTextOptions;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowParticlesVariablesWithSystem;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseMaxParticlesToDisplay;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxParticlesToDisplay;
    
    UPROPERTY()
    ENiagaraDebugPlaybackMode PlaybackMode;
    
    UPROPERTY()
    bool bPlaybackRateEnabled;
    
    UPROPERTY(Config)
    float PlaybackRate;
    
    UPROPERTY(Config)
    bool bLoopTimeEnabled;
    
    UPROPERTY(Config)
    float LoopTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowGlobalBudgetInfo;
    
    FNiagaraDebugHUDSettingsData();
};

