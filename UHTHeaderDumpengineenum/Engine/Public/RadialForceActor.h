#pragma once
#include "CoreMinimal.h"
#include "RigidBodyBase.h"
#include "RadialForceActor.generated.h"

class URadialForceComponent;

UCLASS(MinimalAPI)
class ARadialForceActor : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URadialForceComponent* ForceComponent;
    
public:
    ARadialForceActor();
    UFUNCTION(BlueprintCallable)
    void ToggleForce();
    
    UFUNCTION(BlueprintCallable)
    void FireImpulse();
    
    UFUNCTION(BlueprintCallable)
    void EnableForce();
    
    UFUNCTION(BlueprintCallable)
    void DisableForce();
    
};

