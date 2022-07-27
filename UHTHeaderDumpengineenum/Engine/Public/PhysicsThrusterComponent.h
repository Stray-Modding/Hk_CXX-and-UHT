#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "PhysicsThrusterComponent.generated.h"

UCLASS(BlueprintType, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhysicsThrusterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ThrustStrength;
    
    UPhysicsThrusterComponent();
};

