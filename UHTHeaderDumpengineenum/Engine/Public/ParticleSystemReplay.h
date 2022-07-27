#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ParticleSystemReplay.generated.h"

UCLASS()
class UParticleSystemReplay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    int32 ClipIDNumber;
    
    UParticleSystemReplay();
};

