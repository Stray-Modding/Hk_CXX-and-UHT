#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ParticleLODLevel.generated.h"

class UParticleModuleTypeDataBase;
class UParticleModuleRequired;
class UParticleModule;
class UParticleModuleSpawn;
class UParticleModuleEventGenerator;
class UParticleModuleSpawnBase;
class UParticleModuleOrbit;
class UParticleModuleEventReceiverBase;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UParticleLODLevel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    uint8 bEnabled: 1;
    
    UPROPERTY(Instanced)
    UParticleModuleRequired* RequiredModule;
    
    UPROPERTY(Export)
    TArray<UParticleModule*> Modules;
    
    UPROPERTY(Export)
    UParticleModuleTypeDataBase* TypeDataModule;
    
    UPROPERTY(Export)
    UParticleModuleSpawn* SpawnModule;
    
    UPROPERTY(Export)
    UParticleModuleEventGenerator* EventGenerator;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UParticleModuleSpawnBase*> SpawningModules;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UParticleModule*> SpawnModules;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UParticleModule*> UpdateModules;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UParticleModuleOrbit*> OrbitModules;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UParticleModuleEventReceiverBase*> EventReceiverModules;
    
    UPROPERTY()
    uint8 ConvertedModules: 1;
    
    UPROPERTY()
    int32 PeakActiveParticles;
    
    UParticleLODLevel();
};

