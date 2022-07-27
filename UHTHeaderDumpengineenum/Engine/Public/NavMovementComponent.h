#pragma once
#include "CoreMinimal.h"
#include "MovementComponent.h"
#include "NavAgentProperties.h"
#include "MovementProperties.h"
#include "NavMovementComponent.generated.h"

class UObject;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UNavMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FNavAgentProperties NavAgentProps;
    
protected:
    UPROPERTY(EditAnywhere)
    float FixedPathBrakingDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateNavAgentWithOwnersCollision: 1;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    uint8 bUseAccelerationForPaths: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseFixedBrakingDistanceForPaths: 1;
    
public:
    UPROPERTY()
    FMovementProperties MovementState;
    
private:
    UPROPERTY()
    UObject* PathFollowingComp;
    
public:
    UNavMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopMovementKeepPathing();
    
    UFUNCTION(BlueprintCallable)
    void StopActiveMovement();
    
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMovingOnGround() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching() const;
    
};

