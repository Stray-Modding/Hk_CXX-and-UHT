#include "StaticMesh.h"

class UStaticMeshSocket;
class UMaterialInterface;
class UObject;
class UStaticMeshDescription;

void UStaticMesh::SetStaticMaterials(const TArray<FStaticMaterial>& InStaticMaterials) {
}

void UStaticMesh::RemoveSocket(UStaticMeshSocket* Socket) {
}

TArray<FStaticMaterial> UStaticMesh::GetStaticMaterials() const {
    return TArray<FStaticMaterial>();
}

int32 UStaticMesh::GetNumSections(int32 InLOD) const {
    return 0;
}

int32 UStaticMesh::GetNumLODs() const {
    return 0;
}

void UStaticMesh::GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs) const {
}

int32 UStaticMesh::GetMinimumLODForPlatform(const FName& PlatformName) const {
    return 0;
}

int32 UStaticMesh::GetMaterialIndex(FName MaterialSlotName) const {
    return 0;
}

UMaterialInterface* UStaticMesh::GetMaterial(int32 MaterialIndex) const {
    return NULL;
}

FBoxSphereBounds UStaticMesh::GetBounds() const {
    return FBoxSphereBounds{};
}

FBox UStaticMesh::GetBoundingBox() const {
    return FBox{};
}

UStaticMeshSocket* UStaticMesh::FindSocket(FName InSocketName) const {
    return NULL;
}

UStaticMeshDescription* UStaticMesh::CreateStaticMeshDescription(UObject* Outer) {
    return NULL;
}

void UStaticMesh::BuildFromStaticMeshDescriptions(const TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision) {
}

void UStaticMesh::AddSocket(UStaticMeshSocket* Socket) {
}

FName UStaticMesh::AddMaterial(UMaterialInterface* Material) {
    return NAME_None;
}

UStaticMesh::UStaticMesh() {
    this->LpvBiasMultiplier = 1.00f;
    this->LightmapUVDensity = 0.00f;
    this->LightMapResolution = 4;
    this->LightMapCoordinateIndex = 0;
    this->DistanceFieldSelfShadowBias = 0.00f;
    this->BodySetup = NULL;
    this->LODForCollision = 0;
    this->bGenerateMeshDistanceField = false;
    this->bStripComplexCollisionForConsole = false;
    this->bHasNavigationData = true;
    this->bSupportUniformlyDistributedSampling = false;
    this->bSupportPhysicalMaterialMasks = false;
    this->bSupportRayTracing = true;
    this->bIsBuiltAtRuntime = false;
    this->bAllowCPUAccess = false;
    this->bSupportGpuUniformlyDistributedSampling = false;
    this->ElementToIgnoreForTexFactor = -1;
    this->EditableMesh = NULL;
    this->NavCollision = NULL;
}

