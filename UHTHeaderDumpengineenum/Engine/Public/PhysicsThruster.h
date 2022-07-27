#pragma once
#include "CoreMinimal.h"
#include "RigidBodyBase.h"
#include "PhysicsThruster.generated.h"

class UPhysicsThrusterComponent;

UCLASS()
class APhysicsThruster : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsThrusterComponent* ThrusterComponent;
    
public:
    APhysicsThruster();
};

