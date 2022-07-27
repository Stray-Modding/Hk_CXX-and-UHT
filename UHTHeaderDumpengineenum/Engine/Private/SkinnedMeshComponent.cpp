#include "SkinnedMeshComponent.h"

class USkeletalMesh;
class UPhysicsAsset;
class USkinnedMeshComponent;

void USkinnedMeshComponent::UnloadSkinWeightProfile(FName InProfileName) {
}

void USkinnedMeshComponent::UnHideBoneByName(FName BoneName) {
}

void USkinnedMeshComponent::TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) const {
}

void USkinnedMeshComponent::TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) {
}

void USkinnedMeshComponent::ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex) {
}

void USkinnedMeshComponent::ShowAllMaterialSections(int32 LODIndex) {
}

void USkinnedMeshComponent::SetVertexOffsetUsage(int32 LODIndex, int32 Usage) {
}

void USkinnedMeshComponent::SetVertexColorOverride_LinearColor(int32 LODIndex, const TArray<FLinearColor>& VertexColors) {
}

bool USkinnedMeshComponent::SetSkinWeightProfile(FName InProfileName) {
    return false;
}

void USkinnedMeshComponent::SetSkinWeightOverride(int32 LODIndex, const TArray<FSkelMeshSkinWeightInfo>& SkinWeights) {
}

void USkinnedMeshComponent::SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose) {
}

void USkinnedMeshComponent::SetRenderStatic(bool bNewValue) {
}

void USkinnedMeshComponent::SetPreSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets) {
}

void USkinnedMeshComponent::SetPostSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets) {
}

void USkinnedMeshComponent::SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
}

void USkinnedMeshComponent::SetMinLOD(int32 InNewMinLOD) {
}

void USkinnedMeshComponent::SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate) {
}

void USkinnedMeshComponent::SetForcedLOD(int32 InNewForcedLOD) {
}

void USkinnedMeshComponent::SetCastCapsuleIndirectShadow(bool bNewValue) {
}

void USkinnedMeshComponent::SetCastCapsuleDirectShadow(bool bNewValue) {
}

void USkinnedMeshComponent::SetCapsuleIndirectShadowMinVisibility(float newValue) {
}

bool USkinnedMeshComponent::IsUsingSkinWeightProfile() const {
    return false;
}

bool USkinnedMeshComponent::IsMaterialSectionShown(int32 MaterialID, int32 LODIndex) {
    return false;
}

bool USkinnedMeshComponent::IsBoneHiddenByName(FName BoneName) {
    return false;
}

void USkinnedMeshComponent::HideBoneByName(FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption) {
}

int32 USkinnedMeshComponent::GetVertexOffsetUsage(int32 LODIndex) const {
    return 0;
}

bool USkinnedMeshComponent::GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle) const {
    return false;
}

FName USkinnedMeshComponent::GetSocketBoneName(FName InSocketName) const {
    return NAME_None;
}

FVector USkinnedMeshComponent::GetRefPosePosition(int32 BoneIndex) {
    return FVector{};
}

FName USkinnedMeshComponent::GetParentBone(FName BoneName) const {
    return NAME_None;
}

int32 USkinnedMeshComponent::GetNumLODs() const {
    return 0;
}

int32 USkinnedMeshComponent::GetNumBones() const {
    return 0;
}

int32 USkinnedMeshComponent::GetForcedLOD() const {
    return 0;
}

FTransform USkinnedMeshComponent::GetDeltaTransformFromRefPose(FName BoneName, FName BaseName) const {
    return FTransform{};
}

FName USkinnedMeshComponent::GetCurrentSkinWeightProfileName() const {
    return NAME_None;
}

FName USkinnedMeshComponent::GetBoneName(int32 BoneIndex) const {
    return NAME_None;
}

int32 USkinnedMeshComponent::GetBoneIndex(FName BoneName) const {
    return 0;
}

FName USkinnedMeshComponent::FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) const {
    return NAME_None;
}

void USkinnedMeshComponent::ClearVertexColorOverride(int32 LODIndex) {
}

void USkinnedMeshComponent::ClearSkinWeightProfile() {
}

void USkinnedMeshComponent::ClearSkinWeightOverride(int32 LODIndex) {
}

bool USkinnedMeshComponent::BoneIsChildOf(FName BoneName, FName ParentBoneName) const {
    return false;
}

USkinnedMeshComponent::USkinnedMeshComponent() {
    this->SkeletalMesh = NULL;
    this->PhysicsAssetOverride = NULL;
    this->ForcedLodModel = 0;
    this->MinLodModel = 0;
    this->StreamingDistanceMultiplier = 1.00f;
    this->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->bOverrideMinLod = false;
    this->bUseBoundsFromMasterPoseComponent = false;
    this->bForceWireframe = false;
    this->bDisplayBones = false;
    this->bDisableMorphTarget = false;
    this->bHideSkin = false;
    this->bPerBoneMotionBlur = true;
    this->bComponentUseFixedSkelBounds = false;
    this->bConsiderAllBodiesForBounds = false;
    this->bSyncAttachParentLOD = true;
    this->bCanHighlightSelectedSections = false;
    this->bRecentlyRendered = false;
    this->bCastCapsuleDirectShadow = false;
    this->bCastCapsuleIndirectShadow = false;
    this->bCPUSkinning = false;
    this->bEnableUpdateRateOptimizations = false;
    this->bDisplayDebugUpdateRateOptimizations = false;
    this->bRenderStatic = false;
    this->bIgnoreMasterPoseComponentLOD = false;
    this->bCachedLocalBoundsUpToDate = false;
    this->bForceMeshObjectUpdate = false;
    this->CapsuleIndirectShadowMinVisibility = 0.10f;
}

