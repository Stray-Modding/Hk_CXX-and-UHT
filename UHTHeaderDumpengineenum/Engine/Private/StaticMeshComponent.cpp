#include "StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

class UStaticMesh;

bool UStaticMeshComponent::SetStaticMesh(UStaticMesh* NewMesh) {
    return false;
}

void UStaticMeshComponent::SetReverseCulling(bool ReverseCulling) {
}

void UStaticMeshComponent::SetForcedLodModel(int32 NewForcedLodModel) {
}

void UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing(bool newValue) {
}

void UStaticMeshComponent::SetDistanceFieldSelfShadowBias(float newValue) {
}

void UStaticMeshComponent::OnRep_StaticMesh(UStaticMesh* OldStaticMesh) {
}

void UStaticMeshComponent::GetLocalBounds(FVector& Min, FVector& Max) const {
}

void UStaticMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStaticMeshComponent, StaticMesh);
}

UStaticMeshComponent::UStaticMeshComponent() {
    this->ForcedLodModel = 0;
    this->PreviousLODLevel = 0;
    this->MinLOD = 0;
    this->SubDivisionStepSize = 32;
    this->StaticMesh = NULL;
    this->bEvaluateWorldPositionOffset = false;
    this->bOverrideWireframeColor = false;
    this->bOverrideMinLod = false;
    this->bOverrideNavigationExport = false;
    this->bForceNavigationObstacle = true;
    this->bDisallowMeshPaintPerInstance = false;
    this->bIgnoreInstanceForTextureStreaming = false;
    this->bOverrideLightMapRes = false;
    this->bCastDistanceFieldIndirectShadow = false;
    this->bOverrideDistanceFieldSelfShadowBias = false;
    this->bUseSubDivisions = true;
    this->bUseDefaultCollision = false;
    this->bReverseCulling = false;
    this->OverriddenLightMapRes = 64;
    this->DistanceFieldIndirectShadowMinVisibility = 0.10f;
    this->DistanceFieldSelfShadowBias = 0.00f;
    this->StreamingDistanceMultiplier = 1.00f;
}

