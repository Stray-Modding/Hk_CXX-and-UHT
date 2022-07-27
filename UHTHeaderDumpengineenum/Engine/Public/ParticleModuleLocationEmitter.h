#pragma once
#include "CoreMinimal.h"
#include "ELocationEmitterSelectionMethod.h"
#include "ParticleModuleLocationBase.h"
#include "ParticleModuleLocationEmitter.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationEmitter : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    FName EmitterName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELocationEmitterSelectionMethod> SelectionMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 InheritSourceVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    float InheritSourceVelocityScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritSourceRotation: 1;
    
    UPROPERTY(EditAnywhere)
    float InheritSourceRotationScale;
    
    UParticleModuleLocationEmitter();
};

