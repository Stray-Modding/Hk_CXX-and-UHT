#include "AnimInstance.h"
#include "Templates/SubclassOf.h"

class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class APawn;
class USkeletalMeshComponent;
class AActor;

void UAnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
}

void UAnimInstance::UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass) {
}

APawn* UAnimInstance::TryGetPawnOwner() const {
    return NULL;
}

void UAnimInstance::StopSlotAnimation(float InBlendOutTime, FName SlotNodeName) {
}

void UAnimInstance::SnapshotPose(FPoseSnapshot& Snapshot) {
}

void UAnimInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode::Type> Value) {
}

void UAnimInstance::SetReceiveNotifiesFromLinkedInstances(bool bSet) {
}

void UAnimInstance::SetPropagateNotifiesToLinkedInstances(bool bSet) {
}

void UAnimInstance::SetMorphTarget(FName MorphTargetName, float Value) {
}

void UAnimInstance::SavePoseSnapshot(FName SnapshotName) {
}

void UAnimInstance::ResetDynamics(ETeleportType InTeleportType) {
}

UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float blendInTime, float blendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

float UAnimInstance::PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float blendInTime, float blendOutTime, float InPlayRate, int32 LoopCount) {
    return 0.0f;
}

void UAnimInstance::Montage_StopGroupByName(float InBlendOutTime, FName GroupName) {
}

void UAnimInstance::Montage_Stop(float InBlendOutTime, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_SetPosition(const UAnimMontage* Montage, float newPosition) {
}

void UAnimInstance::Montage_SetPlayRate(const UAnimMontage* Montage, float NewPlayRate) {
}

void UAnimInstance::Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_Resume(const UAnimMontage* Montage) {
}

float UAnimInstance::Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    return 0.0f;
}

void UAnimInstance::Montage_Pause(const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_JumpToSection(FName SectionName, const UAnimMontage* Montage) {
}

bool UAnimInstance::Montage_IsPlaying(const UAnimMontage* Montage) const {
    return false;
}

bool UAnimInstance::Montage_IsActive(const UAnimMontage* Montage) const {
    return false;
}

float UAnimInstance::Montage_GetPosition(const UAnimMontage* Montage) const {
    return 0.0f;
}

float UAnimInstance::Montage_GetPlayRate(const UAnimMontage* Montage) const {
    return 0.0f;
}

bool UAnimInstance::Montage_GetIsStopped(const UAnimMontage* Montage) const {
    return false;
}

FName UAnimInstance::Montage_GetCurrentSection(const UAnimMontage* Montage) const {
    return NAME_None;
}

float UAnimInstance::Montage_GetBlendTime(const UAnimMontage* Montage) const {
    return 0.0f;
}

void UAnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
}

void UAnimInstance::LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass) {
}

void UAnimInstance::LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass) {
}

bool UAnimInstance::IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder) const {
    return false;
}

bool UAnimInstance::IsPlayingSlotAnimation(const UAnimSequenceBase* Asset, FName SlotNodeName) const {
    return false;
}

bool UAnimInstance::IsAnyMontagePlaying() const {
    return false;
}

bool UAnimInstance::HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName) const {
    return false;
}

bool UAnimInstance::GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime) const {
    return false;
}

FMarkerSyncAnimPosition UAnimInstance::GetSyncGroupPosition(FName InSyncGroupName) const {
    return FMarkerSyncAnimPosition{};
}

float UAnimInstance::GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

bool UAnimInstance::GetReceiveNotifiesFromLinkedInstances() const {
    return false;
}

bool UAnimInstance::GetPropagateNotifiesToLinkedInstances() const {
    return false;
}

USkeletalMeshComponent* UAnimInstance::GetOwningComponent() const {
    return NULL;
}

AActor* UAnimInstance::GetOwningActor() const {
    return NULL;
}

void UAnimInstance::GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<UAnimInstance*>& OutLinkedInstances) const {
}

UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, TSubclassOf<UAnimInstance> InClass) const {
    return NULL;
}

UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroup(FName InGroup) const {
    return NULL;
}

UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const {
    return NULL;
}

void UAnimInstance::GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const {
}

UAnimInstance* UAnimInstance::GetLinkedAnimGraphInstanceByTag(FName InTag) const {
    return NULL;
}

float UAnimInstance::GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceMachineWeight(int32 MachineIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceCurrentStateElapsedTime(int32 MachineIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTime(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerLength(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetCurveValue(FName CurveName) const {
    return 0.0f;
}

FName UAnimInstance::GetCurrentStateName(int32 MachineIndex) {
    return NAME_None;
}

UAnimMontage* UAnimInstance::GetCurrentActiveMontage() const {
    return NULL;
}

void UAnimInstance::GetAllCurveNames(TArray<FName>& OutNames) const {
}

void UAnimInstance::GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames) const {
}

void UAnimInstance::ClearMorphTargets() {
}

float UAnimInstance::CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation) const {
    return 0.0f;
}






UAnimInstance::UAnimInstance() {
    this->CurrentSkeleton = NULL;
    this->RootMotionMode = ERootMotionMode::RootMotionFromMontagesOnly;
    this->bUseMultiThreadedAnimationUpdate = true;
    this->bUsingCopyPoseFromMesh = false;
    this->bReceiveNotifiesFromLinkedInstances = false;
    this->bPropagateNotifiesToLinkedInstances = false;
    this->bQueueMontageEvents = false;
}

