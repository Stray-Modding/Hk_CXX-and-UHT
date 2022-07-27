#include "Character.h"
#include "Net/UnrealNetwork.h"
#include "SkeletalMeshComponent.h"
#include "CharacterMovementComponent.h"
#include "CapsuleComponent.h"

class UAnimMontage;
class UPrimitiveComponent;

void ACharacter::UnCrouch(bool bClientSimulation) {
}

void ACharacter::StopJumping() {
}

void ACharacter::StopAnimMontage(UAnimMontage* AnimMontage) {
}

void ACharacter::ServerMovePacked_Implementation(const FCharacterServerMovePackedBits& PackedBits) {
}
bool ACharacter::ServerMovePacked_Validate(const FCharacterServerMovePackedBits& PackedBits) {
    return true;
}

void ACharacter::ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags) {
}
bool ACharacter::ServerMoveOld_Validate(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags) {
    return true;
}

void ACharacter::ServerMoveNoBase_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool ACharacter::ServerMoveNoBase_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void ACharacter::ServerMoveDualNoBase_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool ACharacter::ServerMoveDualNoBase_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void ACharacter::ServerMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ACharacter::ServerMoveDualHybridRootMotion_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ACharacter::ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ACharacter::ServerMoveDual_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ACharacter::ServerMove_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ACharacter::ServerMove_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ACharacter::RootMotionDebugClientPrintOnScreen_Implementation(const FString& inString) {
}

float ACharacter::PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName) {
    return 0.0f;
}

void ACharacter::OnWalkingOffLedge_Implementation(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta) {
}

void ACharacter::OnRep_RootMotion() {
}

void ACharacter::OnRep_ReplicatedBasedMovement() {
}

void ACharacter::OnRep_ReplayLastTransformUpdateTimeStamp() {
}

void ACharacter::OnRep_IsCrouched() {
}



void ACharacter::OnJumped_Implementation() {
}

void ACharacter::LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
}





void ACharacter::Jump() {
}

bool ACharacter::IsPlayingRootMotion() const {
    return false;
}

bool ACharacter::IsPlayingNetworkedRootMotionMontage() const {
    return false;
}

bool ACharacter::IsJumpProvidingForce() const {
    return false;
}

bool ACharacter::HasAnyRootMotion() const {
    return false;
}

UAnimMontage* ACharacter::GetCurrentMontage() const {
    return NULL;
}

FVector ACharacter::GetBaseTranslationOffset() const {
    return FVector{};
}

FRotator ACharacter::GetBaseRotationOffsetRotator() const {
    return FRotator{};
}

float ACharacter::GetAnimRootMotionTranslationScale() const {
    return 0.0f;
}

void ACharacter::Crouch(bool bClientSimulation) {
}

void ACharacter::ClientVeryShortAdjustPosition_Implementation(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode) {
}

void ACharacter::ClientMoveResponsePacked_Implementation(const FCharacterMoveResponsePackedBits& PackedBits) {
}
bool ACharacter::ClientMoveResponsePacked_Validate(const FCharacterMoveResponsePackedBits& PackedBits) {
    return true;
}

void ACharacter::ClientCheatWalk_Implementation() {
}

void ACharacter::ClientCheatGhost_Implementation() {
}

void ACharacter::ClientCheatFly_Implementation() {
}

void ACharacter::ClientAdjustRootMotionSourcePosition_Implementation(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode) {
}

void ACharacter::ClientAdjustRootMotionPosition_Implementation(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode) {
}

void ACharacter::ClientAdjustPosition_Implementation(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode) {
}

void ACharacter::ClientAckGoodMove_Implementation(float Timestamp) {
}

bool ACharacter::CanJumpInternal_Implementation() const {
    return false;
}

bool ACharacter::CanJump() const {
    return false;
}

bool ACharacter::CanCrouch() const {
    return false;
}

void ACharacter::CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation) {
}

void ACharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACharacter, ReplicatedBasedMovement);
    DOREPLIFETIME(ACharacter, AnimRootMotionTranslationScale);
    DOREPLIFETIME(ACharacter, ReplicatedServerLastTransformUpdateTimeStamp);
    DOREPLIFETIME(ACharacter, ReplayLastTransformUpdateTimeStamp);
    DOREPLIFETIME(ACharacter, ReplicatedMovementMode);
    DOREPLIFETIME(ACharacter, bIsCrouched);
    DOREPLIFETIME(ACharacter, bProxyIsJumpForceApplied);
    DOREPLIFETIME(ACharacter, JumpMaxHoldTime);
    DOREPLIFETIME(ACharacter, JumpMaxCount);
    DOREPLIFETIME(ACharacter, RepRootMotion);
}

ACharacter::ACharacter() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->CharacterMovement = CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("CharMoveComp"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->AnimRootMotionTranslationScale = 1.00f;
    this->ReplicatedServerLastTransformUpdateTimeStamp = 0.00f;
    this->ReplayLastTransformUpdateTimeStamp = 0.00f;
    this->ReplicatedMovementMode = 0;
    this->bInBaseReplication = false;
    this->CrouchedEyeHeight = 32.00f;
    this->bIsCrouched = false;
    this->bProxyIsJumpForceApplied = false;
    this->bPressedJump = false;
    this->bClientUpdating = false;
    this->bClientWasFalling = false;
    this->bClientResimulateRootMotion = false;
    this->bClientResimulateRootMotionSources = false;
    this->bSimGravityDisabled = false;
    this->bClientCheckEncroachmentOnNetUpdate = true;
    this->bServerMoveIgnoreRootMotion = false;
    this->bWasJumping = false;
    this->JumpKeyHoldTime = 0.00f;
    this->JumpForceTimeRemaining = 0.00f;
    this->ProxyJumpForceStartedTime = 0.00f;
    this->JumpMaxHoldTime = 0.00f;
    this->JumpMaxCount = 1;
    this->JumpCurrentCount = 0;
    this->JumpCurrentCountPreJump = 0;
}

