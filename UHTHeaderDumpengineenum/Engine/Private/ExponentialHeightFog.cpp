#include "ExponentialHeightFog.h"
#include "Net/UnrealNetwork.h"
#include "ExponentialHeightFogComponent.h"

void AExponentialHeightFog::OnRep_bEnabled() {
}

void AExponentialHeightFog::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExponentialHeightFog, bEnabled);
}

AExponentialHeightFog::AExponentialHeightFog() {
    this->Component = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->bEnabled = false;
}

