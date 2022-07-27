#pragma once
#include "CoreMinimal.h"
#include "ENetworkSmoothingMode.h"
#include "RVOAvoidanceInterface.h"
#include "PawnMovementComponent.h"
#include "NetworkPredictionInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EMovementMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FindFloorResult.h"
#include "NavAvoidanceMask.h"
#include "RootMotionSourceGroup.h"
#include "CharacterMovementComponentPostPhysicsTickFunction.h"
#include "RootMotionMovementParams.h"
#include "HitResult.h"
#include "CharacterMovementComponent.generated.h"

class ACharacter;
class USceneComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UCharacterMovementComponent : public UPawnMovementComponent, public IRVOAvoidanceInterface, public INetworkPredictionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    ACharacter* CharacterOwner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpZVelocity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float JumpOffJumpZFactor;
    
private:
    UPROPERTY(EditAnywhere)
    float WalkableFloorAngle;
    
    UPROPERTY(VisibleAnywhere)
    float WalkableFloorZ;
    
public:
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 CustomMovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENetworkSmoothingMode NetworkSmoothingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWalkSpeedCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSwimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCustomMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAnalogWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingFriction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float BrakingSubStepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirControlBoostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirControlBoostVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FallingLateralFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrouchedHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Buoyancy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float PerchRadiusThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float PerchAdditionalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bUseSeparateBrakingFriction: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bApplyGravityWhileJumping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseControllerDesiredRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOrientRotationToMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSweepWhileNavWalking: 1;
    
protected:
    UPROPERTY()
    uint8 bMovementInProgress: 1;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableScopedMovementUpdates: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableServerDualMoveScopedMovementUpdates: 1;
    
    UPROPERTY()
    uint8 bForceMaxAccel: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bRunPhysicsWithNoController: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    uint8 bForceNextFloorCheck: 1;
    
    UPROPERTY()
    uint8 bShrinkProxyCapsule: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanWalkOffLedges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanWalkOffLedgesWhenCrouching: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bNetworkSkipProxyPredictionOnNetUpdate: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bNetworkAlwaysReplicateTransformUpdateTimestamp: 1;
    
    UPROPERTY()
    uint8 bDeferUpdateMoveComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnablePhysicsInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bTouchForceScaledToMass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPushForceScaledToMass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPushForceUsingZOffset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bScalePushForceToVelocity: 1;
    
    UPROPERTY(Export)
    USceneComponent* DeferredUpdatedMoveComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxOutOfWaterStepHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float OutofWaterZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StandingDownwardForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialPushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushForcePointZOffsetFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TouchForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTouchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTouchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RepulsionForce;
    
protected:
    UPROPERTY()
    FVector Acceleration;
    
    UPROPERTY()
    FQuat LastUpdateRotation;
    
    UPROPERTY()
    FVector LastUpdateLocation;
    
    UPROPERTY()
    FVector LastUpdateVelocity;
    
    UPROPERTY(Transient)
    float ServerLastTransformUpdateTimeStamp;
    
    UPROPERTY(Transient)
    float ServerLastClientGoodMoveAckTime;
    
    UPROPERTY(Transient)
    float ServerLastClientAdjustmentTime;
    
    UPROPERTY()
    FVector PendingImpulseToApply;
    
    UPROPERTY()
    FVector PendingForceToApply;
    
    UPROPERTY()
    float AnalogInputModifier;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxSimulationTimeStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 MaxSimulationIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 MaxJumpApexAttemptsPerSimulation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxDepenetrationWithGeometry;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxDepenetrationWithGeometryAsProxy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxDepenetrationWithPawn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxDepenetrationWithPawnAsProxy;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float NetworkSimulatedSmoothLocationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float NetworkSimulatedSmoothRotationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float ListenServerNetworkSimulatedSmoothLocationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float ListenServerNetworkSimulatedSmoothRotationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float NetProxyShrinkRadius;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float NetProxyShrinkHalfHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkMaxSmoothUpdateDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkNoSmoothUpdateDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkMinTimeBetweenClientAckGoodMoves;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkMinTimeBetweenClientAdjustments;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;
    
    UPROPERTY(EditDefaultsOnly)
    float NetworkLargeClientCorrectionDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float LedgeCheckThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float JumpOutOfWaterPitch;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FFindFloorResult CurrentFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> DefaultLandMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> DefaultWaterMovementMode;
    
private:
    UPROPERTY(Transient)
    TEnumAsByte<EMovementMode> GroundMovementMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMaintainHorizontalGroundVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseVelocityX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseVelocityY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseVelocityZ: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseAngularVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    uint8 bJustTeleported: 1;
    
    UPROPERTY(Transient)
    uint8 bNetworkUpdateReceived: 1;
    
    UPROPERTY(Transient)
    uint8 bNetworkMovementModeChanged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    uint8 bIgnoreClientMovementErrorChecksAndCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    uint8 bServerAcceptClientAuthoritativePosition: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bNotifyApex: 1;
    
    UPROPERTY()
    uint8 bCheatFlying: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 bWantsToCrouch: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    uint8 bCrouchMaintainsBaseLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreBaseRotation: 1;
    
    UPROPERTY()
    uint8 bFastAttachedMove: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bAlwaysCheckFloor: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseFlatBaseForFloorChecks: 1;
    
    UPROPERTY()
    uint8 bPerformingJumpOff: 1;
    
    UPROPERTY()
    uint8 bWantsToLeaveNavWalking: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseRVOAvoidance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bRequestedMoveUseAcceleration: 1;
    
    UPROPERTY(Transient)
    uint8 bWasSimulatingRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowPhysicsRotationDuringAnimRootMotion: 1;
    
protected:
    UPROPERTY(Transient)
    uint8 bHasRequestedVelocity: 1;
    
    UPROPERTY(Transient)
    uint8 bRequestedMoveWithMaxSpeed: 1;
    
    UPROPERTY(Transient)
    uint8 bWasAvoidanceUpdated: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bProjectNavMeshWalking: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bProjectNavMeshOnBothWorldChannels: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceConsiderationRadius;
    
    UPROPERTY(Transient)
    FVector RequestedVelocity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask GroupsToAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask GroupsToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceWeight;
    
    UPROPERTY()
    FVector PendingLaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionInterval;
    
    UPROPERTY(Transient)
    float NavMeshProjectionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionHeightScaleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionHeightScaleDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavWalkingFloorDistTolerance;
    
    UPROPERTY()
    FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;
    
    UPROPERTY()
    float MinTimeBetweenTimeStampResets;
    
    UPROPERTY(Transient)
    FRootMotionSourceGroup CurrentRootMotion;
    
    UPROPERTY(Transient)
    FRootMotionSourceGroup ServerCorrectionRootMotion;
    
    UPROPERTY(Transient)
    FRootMotionMovementParams RootMotionParams;
    
    UPROPERTY(Transient)
    FVector AnimRootMotionVelocity;
    
    UCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorZ(float InWalkableFloorZ);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnore(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoid(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroup(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceEnabled(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    float K2_GetWalkableFloorZ() const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetWalkableFloorAngle() const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetModifiedMaxAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    void K2_FindFloor(FVector CapsuleLocation, FFindFloorResult& FloorResult) const;
    
    UFUNCTION(BlueprintPure)
    void K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult) const;
    
    UFUNCTION(BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWalkable(const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintPure)
    float GetValidPerchRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetPerchRadiusThreshold() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetMovementBase() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinAnalogSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxJumpHeightWithJumpTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxJumpHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxBrakingDeceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastUpdateVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLastUpdateRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastUpdateLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetImpartedMovementBaseVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetCharacterOwner() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnalogInputModifier() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableMovement();
    
    UFUNCTION(BlueprintCallable)
    void ClearAccumulatedForces();
    
protected:
    UFUNCTION()
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector Force);
    
    
    // Fix for true pure virtual functions not being implemented
};

