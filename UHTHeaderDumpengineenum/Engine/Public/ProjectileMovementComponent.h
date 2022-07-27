#pragma once
#include "CoreMinimal.h"
#include "MovementComponent.h"
#include "HitResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ProjectileMovementComponent.generated.h"

class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UProjectileMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileStopDelegate, const FHitResult&, ImpactResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProjectileBounceDelegate, const FHitResult&, ImpactResult, const FVector&, ImpactVelocity);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRotationFollowsVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRotationRemainsVertical: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShouldBounce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInitialVelocityInLocalSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bForceSubStepping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSimulationEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSweepCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsHomingProjectile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBounceAngleAffectsFriction: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 bIsSliding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInterpMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInterpRotation: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float PreviousHitTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector PreviousHitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProjectileGravityScale;
    
    UPROPERTY()
    float Buoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Bounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BounceVelocityStopSimulatingThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MinFrictionFraction;
    
    UPROPERTY(BlueprintAssignable)
    FOnProjectileBounceDelegate OnProjectileBounce;
    
    UPROPERTY(BlueprintAssignable)
    FOnProjectileStopDelegate OnProjectileStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HomingAccelerationMagnitude;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleInstanceOnly)
    TWeakObjectPtr<USceneComponent> HomingTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSimulationTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSimulationIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BounceAdditionalIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpLocationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpRotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpLocationMaxLagDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpLocationSnapToTargetDistance;
    
    UProjectileMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopSimulating(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void SetVelocityInLocalSpace(FVector NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolatedComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void ResetInterpolation();
    
    UFUNCTION(BlueprintCallable)
    void MoveInterpolationTarget(const FVector& NewLocation, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintPure)
    FVector LimitVelocity(FVector NewVelocity) const;
    
    UFUNCTION(BlueprintPure)
    bool IsVelocityUnderSimulationThreshold() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInterpolationComplete() const;
    
};

