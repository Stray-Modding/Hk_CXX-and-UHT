#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
#include "EPlaneConstraintAxisSetting.h"
#include "HitResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MovementComponent.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class APhysicsVolume;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, Export, Transient)
    USceneComponent* UpdatedComponent;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, Export, Transient)
    UPrimitiveComponent* UpdatedPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Velocity;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PlaneConstraintNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PlaneConstraintOrigin;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUpdateOnlyIfRendered: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoUpdateTickRegistration: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bTickBeforeOwner: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoRegisterUpdatedComponent: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bConstrainToPlane: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSnapToPlaneAtStart: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoRegisterPhysicsVolumeUpdates: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bComponentShouldUpdatePhysicsVolume: 1;
    
private:
    UPROPERTY(EditAnywhere)
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;
    
public:
    UMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopMovementImmediately();
    
    UFUNCTION(BlueprintCallable)
    void SnapUpdatedComponentToPlane();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdatedComponent(USceneComponent* NewUpdatedComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintOrigin(FVector PlaneOrigin);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintNormal(FVector PlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
    
    UFUNCTION()
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
    UFUNCTION(BlueprintCallable)
    bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport);
    
    UFUNCTION(BlueprintPure)
    float K2_GetModifiedMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetMaxSpeedModifier() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExceedingMaxSpeed(float MaxSpeed) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPlaneConstraintOrigin() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPlaneConstraintNormal() const;
    
    UFUNCTION(BlueprintPure)
    EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting() const;
    
    UFUNCTION(BlueprintPure)
    APhysicsVolume* GetPhysicsVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetGravityZ() const;
    
    UFUNCTION(BlueprintPure)
    FVector ConstrainNormalToPlane(FVector Normal) const;
    
    UFUNCTION(BlueprintPure)
    FVector ConstrainLocationToPlane(FVector Location) const;
    
    UFUNCTION(BlueprintPure)
    FVector ConstrainDirectionToPlane(FVector Direction) const;
    
};

