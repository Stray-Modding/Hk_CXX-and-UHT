#pragma once
#include "CoreMinimal.h"
#include "EParticleEventType.h"
#include "ParticleModuleEventBase.h"
#include "ParticleModuleEventReceiverBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleEventType> EventGeneratorType;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UParticleModuleEventReceiverBase();
};

