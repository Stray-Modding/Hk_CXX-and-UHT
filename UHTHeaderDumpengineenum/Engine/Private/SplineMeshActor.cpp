#include "SplineMeshActor.h"
#include "SplineMeshComponent.h"

ASplineMeshActor::ASplineMeshActor() {
    this->SplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMeshComponent0"));
}

