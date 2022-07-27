#include "MagicLeapMeshTrackerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class UMRMeshComponent;
class UMagicLeapMeshBlockSelectorInterface;
class IMagicLeapMeshBlockSelectorInterface;

void UMagicLeapMeshTrackerComponent::SelectMeshBlocks_Implementation(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh) {
}

int32 UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates() {
    return 0;
}

void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector() {
}

void UMagicLeapMeshTrackerComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

void UMagicLeapMeshTrackerComponent::ConnectBlockSelector(TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector) {
}

UMagicLeapMeshTrackerComponent::UMagicLeapMeshTrackerComponent() {
    this->ScanWorld = true;
    this->MeshType = EMagicLeapMeshType::Triangles;
    this->BoundingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingVolume"));
    this->LevelOfDetail = EMagicLeapMeshLOD::Medium;
    this->PerimeterOfGapsToFill = 300.00f;
    this->Planarize = false;
    this->DisconnectedSectionArea = 50.00f;
    this->RequestNormals = true;
    this->RequestVertexConfidence = false;
    this->VertexColorMode = EMagicLeapMeshVertexColorMode::None;
    this->BlockVertexColors.AddDefaulted(6);
    this->RemoveOverlappingTriangles = false;
    this->MRMesh = NULL;
    this->BricksPerFrame = 1;
}

