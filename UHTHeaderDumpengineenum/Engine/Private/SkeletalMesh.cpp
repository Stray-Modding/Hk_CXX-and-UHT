#include "SkeletalMesh.h"

class USkeletalMeshSocket;
class UMorphTarget;
class UObject;
class UClothingAssetBase;
class USkeletalMeshLODSettings;
class UPhysicsAsset;
class UNodeMappingContainer;
class USkeleton;
class UBlueprint;

void USkeletalMesh::SetMorphTargets(const TArray<UMorphTarget*>& InMorphTargets) {
}

void USkeletalMesh::SetMeshClothingAssets(const TArray<UClothingAssetBase*>& InMeshClothingAssets) {
}

void USkeletalMesh::SetMaterials(const TArray<FSkeletalMaterial>& InMaterials) {
}

void USkeletalMesh::SetLODSettings(USkeletalMeshLODSettings* InLODSettings) {
}

void USkeletalMesh::SetDefaultAnimatingRig(TSoftObjectPtr<UObject> InAnimatingRig) {
}

int32 USkeletalMesh::NumSockets() const {
    return 0;
}

TArray<FString> USkeletalMesh::K2_GetAllMorphTargetNames() const {
    return TArray<FString>();
}

bool USkeletalMesh::IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const {
    return false;
}

USkeletalMeshSocket* USkeletalMesh::GetSocketByIndex(int32 Index) const {
    return NULL;
}

USkeleton* USkeletalMesh::GetSkeleton() const {
    return NULL;
}

UPhysicsAsset* USkeletalMesh::GetShadowPhysicsAsset() const {
    return NULL;
}

UPhysicsAsset* USkeletalMesh::GetPhysicsAsset() const {
    return NULL;
}

TArray<UNodeMappingContainer*> USkeletalMesh::GetNodeMappingData() const {
    return TArray<UNodeMappingContainer*>();
}

UNodeMappingContainer* USkeletalMesh::GetNodeMappingContainer(UBlueprint* SourceAsset) const {
    return NULL;
}

TArray<UMorphTarget*> USkeletalMesh::GetMorphTargets() const {
    return TArray<UMorphTarget*>();
}

TArray<UClothingAssetBase*> USkeletalMesh::GetMeshClothingAssets() const {
    return TArray<UClothingAssetBase*>();
}

TArray<FSkeletalMaterial> USkeletalMesh::GetMaterials() const {
    return TArray<FSkeletalMaterial>();
}

USkeletalMeshLODSettings* USkeletalMesh::GetLODSettings() const {
    return NULL;
}

FBoxSphereBounds USkeletalMesh::GetImportedBounds() const {
    return FBoxSphereBounds{};
}

TSoftObjectPtr<UObject> USkeletalMesh::GetDefaultAnimatingRig() const {
    return NULL;
}

FBoxSphereBounds USkeletalMesh::GetBounds() const {
    return FBoxSphereBounds{};
}

USkeletalMeshSocket* USkeletalMesh::FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const {
    return NULL;
}

USkeletalMeshSocket* USkeletalMesh::FindSocketAndIndex(FName InSocketName, int32& OutIndex) const {
    return NULL;
}

USkeletalMeshSocket* USkeletalMesh::FindSocket(FName InSocketName) const {
    return NULL;
}

USkeletalMesh::USkeletalMesh() {
    this->Skeleton = NULL;
    this->SkelMirrorAxis = EAxis::X;
    this->SkelMirrorFlipAxis = EAxis::Z;
    this->bUseFullPrecisionUVs = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bHasBeenSimplified = false;
    this->bHasVertexColors = false;
    this->bEnablePerPolyCollision = false;
    this->BodySetup = NULL;
    this->PhysicsAsset = NULL;
    this->ShadowPhysicsAsset = NULL;
    this->bSupportRayTracing = true;
    this->PostProcessAnimBlueprint = NULL;
}

