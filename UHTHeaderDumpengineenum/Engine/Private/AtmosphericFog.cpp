#include "AtmosphericFog.h"
#include "AtmosphericFogComponent.h"

AAtmosphericFog::AAtmosphericFog() {
    this->AtmosphericFogComponent = CreateDefaultSubobject<UAtmosphericFogComponent>(TEXT("AtmosphericFogComponent0"));
}

