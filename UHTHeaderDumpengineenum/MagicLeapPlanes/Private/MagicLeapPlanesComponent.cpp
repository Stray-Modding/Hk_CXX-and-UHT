#include "MagicLeapPlanesComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

bool UMagicLeapPlanesComponent::RequestPlanesAsync() {
    return false;
}

UMagicLeapPlanesComponent::UMagicLeapPlanesComponent() {
    this->QueryFlags.AddDefaulted(4);
    this->SearchVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("SearchVolume"));
    this->MaxResults = 10;
    this->MinHolePerimeter = 50.00f;
    this->MinPlaneArea = 400.00f;
    this->QueryType = EMagicLeapPlaneQueryType::Bulk;
    this->SimilarityThreshold = 1.00f;
}

