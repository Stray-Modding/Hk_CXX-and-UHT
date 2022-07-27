#include "DecalActor.h"
#include "DecalComponent.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

void ADecalActor::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
}

UMaterialInterface* ADecalActor::GetDecalMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* ADecalActor::CreateDynamicMaterialInstance() {
    return NULL;
}

ADecalActor::ADecalActor() {
    this->Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("NewDecalComponent"));
}

