#pragma once
#include "CoreMinimal.h"
#include "RawDistributionVector.h"
#include "ParticleModuleEventReceiverBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleEventReceiverSpawn.generated.h"

class UPhysicalMaterial;

UCLASS(EditInlineNew)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat SpawnCount;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseParticleTime: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsePSysLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector InheritVelocityScale;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhysicalMaterial*> PhysicalMaterials;
    
    UPROPERTY(EditAnywhere)
    uint8 bBanPhysicalMaterials: 1;
    
    UParticleModuleEventReceiverSpawn();
};

