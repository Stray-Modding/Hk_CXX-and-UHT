#include "MeshComponent.h"

class UMaterialInterface;

void UMeshComponent::SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue) {
}

void UMeshComponent::SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue) {
}

void UMeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups) {
}

bool UMeshComponent::IsMaterialSlotNameValid(FName MaterialSlotName) const {
    return false;
}

TArray<FName> UMeshComponent::GetMaterialSlotNames() const {
    return TArray<FName>();
}

TArray<UMaterialInterface*> UMeshComponent::GetMaterials() const {
    return TArray<UMaterialInterface*>();
}

int32 UMeshComponent::GetMaterialIndex(FName MaterialSlotName) const {
    return 0;
}

UMeshComponent::UMeshComponent() {
    this->bEnableMaterialParameterCaching = false;
}

