#pragma once
#include "CoreMinimal.h"
#include "EParticleEventType.h"
#include "ParticleEvent_GenerateInfo.generated.h"

class UParticleModuleEventSendToGame;

USTRUCT(BlueprintType)
struct FParticleEvent_GenerateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleEventType> Type;
    
    UPROPERTY(EditAnywhere)
    int32 Frequency;
    
    UPROPERTY(EditAnywhere)
    int32 ParticleFrequency;
    
    UPROPERTY(EditAnywhere)
    uint8 FirstTimeOnly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 LastTimeOnly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 UseReflectedImpactVector: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseOrbitOffset: 1;
    
    UPROPERTY(EditAnywhere)
    FName CustomName;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;
    
    ENGINE_API FParticleEvent_GenerateInfo();
};

