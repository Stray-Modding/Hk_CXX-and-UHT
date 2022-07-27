#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Emitter.h"
#include "EmitterCameraLensEffectBase.generated.h"

class APlayerCameraManager;
class UParticleSystem;
class AEmitterCameraLensEffectBase;

UCLASS(Abstract)
class ENGINE_API AEmitterCameraLensEffectBase : public AEmitter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* PS_CameraEffect;
    
    UPROPERTY()
    UParticleSystem* PS_CameraEffectNonExtremeContent;
    
    UPROPERTY(Transient)
    APlayerCameraManager* BaseCamera;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform RelativeTransform;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float BaseFOV;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowMultipleInstances: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bResetWhenRetriggered: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<AEmitterCameraLensEffectBase>> EmittersToTreatAsSame;
    
private:
    UPROPERTY()
    float DistFromCamera;
    
public:
    AEmitterCameraLensEffectBase();
};

