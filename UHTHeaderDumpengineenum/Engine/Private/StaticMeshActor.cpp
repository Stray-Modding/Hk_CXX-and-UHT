#include "StaticMeshActor.h"
#include "StaticMeshComponent.h"

void AStaticMeshActor::SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility) {
}

AStaticMeshActor::AStaticMeshActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->bStaticMeshReplicateMovement = false;
    this->NavigationGeometryGatheringMode = ENavDataGatheringMode::Default;
}

