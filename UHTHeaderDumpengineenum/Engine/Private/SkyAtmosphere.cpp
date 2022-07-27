#include "SkyAtmosphere.h"
#include "SkyAtmosphereComponent.h"

ASkyAtmosphere::ASkyAtmosphere() {
    this->SkyAtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
}

