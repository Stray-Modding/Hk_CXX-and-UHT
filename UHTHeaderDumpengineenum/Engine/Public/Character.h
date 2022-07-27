#pragma once
#include "CoreMinimal.h"
#include "Pawn.h"
#include "CharacterReachedApexSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BasedMovementInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MovementModeChangedSignatureDelegate.h"
#include "CharacterMovementUpdatedSignatureDelegate.h"
#include "RootMotionSourceGroup.h"
#include "RootMotionMovementParams.h"
#include "SimulatedRootMotionReplicatedMove.h"
#include "RepRootMotionMontage.h"
#include "Vector_NetQuantizeNormal.h"
#include "CharacterServerMovePackedBits.h"
#include "Vector_NetQuantize10.h"
#include "Vector_NetQuantize100.h"
#include "HitResult.h"
#include "EMovementMode.h"
#include "CharacterMoveResponsePackedBits.h"
#include "Character.generated.h"

class USkeletalMeshComponent;
class UCapsuleComponent;
class UCharacterMovementComponent;
class UPrimitiveComponent;
class UAnimMontage;

UCLASS()
class ENGINE_API ACharacter : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
protected:
    UPROPERTY()
    FBasedMovementInfo BasedMovement;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedBasedMovement)
    FBasedMovementInfo ReplicatedBasedMovement;
    
    UPROPERTY(Replicated)
    float AnimRootMotionTranslationScale;
    
    UPROPERTY()
    FVector BaseTranslationOffset;
    
    UPROPERTY()
    FQuat BaseRotationOffset;
    
    UPROPERTY(Replicated)
    float ReplicatedServerLastTransformUpdateTimeStamp;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplayLastTransformUpdateTimeStamp)
    float ReplayLastTransformUpdateTimeStamp;
    
    UPROPERTY(Replicated)
    uint8 ReplicatedMovementMode;
    
    UPROPERTY()
    bool bInBaseReplication;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchedEyeHeight;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsCrouched)
    uint8 bIsCrouched: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bProxyIsJumpForceApplied: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bPressedJump: 1;
    
    UPROPERTY(Transient)
    uint8 bClientUpdating: 1;
    
    UPROPERTY(Transient)
    uint8 bClientWasFalling: 1;
    
    UPROPERTY(Transient)
    uint8 bClientResimulateRootMotion: 1;
    
    UPROPERTY(Transient)
    uint8 bClientResimulateRootMotionSources: 1;
    
    UPROPERTY()
    uint8 bSimGravityDisabled: 1;
    
    UPROPERTY(Transient)
    uint8 bClientCheckEncroachmentOnNetUpdate: 1;
    
    UPROPERTY(Transient)
    uint8 bServerMoveIgnoreRootMotion: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    uint8 bWasJumping: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float JumpKeyHoldTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float JumpForceTimeRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float ProxyJumpForceStartedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float JumpMaxHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 JumpMaxCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 JumpCurrentCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 JumpCurrentCountPreJump;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterReachedApexSignature OnReachedJumpApex;
    
    UPROPERTY(BlueprintAssignable)
    FMovementModeChangedSignature MovementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterMovementUpdatedSignature OnCharacterMovementUpdated;
    
    UPROPERTY(Transient)
    FRootMotionSourceGroup SavedRootMotion;
    
    UPROPERTY(Transient)
    FRootMotionMovementParams ClientRootMotionParams;
    
    UPROPERTY(Transient)
    TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;
    
    UPROPERTY(ReplicatedUsing=OnRep_RootMotion)
    FRepRootMotionMontage RepRootMotion;
    
    ACharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnCrouch(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void StopJumping();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMovePacked(const FCharacterServerMovePackedBits& PackedBits);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Client, Reliable)
    void RootMotionDebugClientPrintOnScreen(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    
    UFUNCTION()
    void OnRep_RootMotion();
    
    UFUNCTION()
    void OnRep_ReplicatedBasedMovement();
    
    UFUNCTION()
    void OnRep_ReplayLastTransformUpdateTimeStamp();
    
    UFUNCTION()
    void OnRep_IsCrouched();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnJumped();
    
    UFUNCTION(BlueprintCallable)
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_UpdateCustomMovement(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    void Jump();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingRootMotion() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingNetworkedRootMotionMontage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpProvidingForce() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyRootMotion() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentMontage() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBaseTranslationOffset() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseRotationOffsetRotator() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimRootMotionTranslationScale() const;
    
    UFUNCTION(BlueprintCallable)
    void Crouch(bool bClientSimulation);
    
    UFUNCTION(Client, Unreliable)
    void ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(Client, Unreliable, WithValidation)
    void ClientMoveResponsePacked(const FCharacterMoveResponsePackedBits& PackedBits);
    
    UFUNCTION(Client, Reliable)
    void ClientCheatWalk();
    
    UFUNCTION(Client, Reliable)
    void ClientCheatGhost();
    
    UFUNCTION(Client, Reliable)
    void ClientCheatFly();
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(Client, Unreliable)
    void ClientAckGoodMove(float Timestamp);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CanJumpInternal() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool CanJump() const;
    
    UFUNCTION(BlueprintPure)
    bool CanCrouch() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);
    
};

