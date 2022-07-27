#pragma once
#include "CoreMinimal.h"
#include "RigidBodyBase.h"
#include "PhysicsConstraintActor.generated.h"

class UPhysicsConstraintComponent;
class AActor;

UCLASS(MinimalAPI)
class APhysicsConstraintActor : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* ConstraintComp;
    
public:
    UPROPERTY()
    AActor* ConstraintActor1;
    
    UPROPERTY()
    AActor* ConstraintActor2;
    
    UPROPERTY()
    uint8 bDisableCollision: 1;
    
    APhysicsConstraintActor();
};

