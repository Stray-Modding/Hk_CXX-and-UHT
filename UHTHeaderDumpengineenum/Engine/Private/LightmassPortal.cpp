#include "LightmassPortal.h"
#include "LightmassPortalComponent.h"

ALightmassPortal::ALightmassPortal() {
    this->PortalComponent = CreateDefaultSubobject<ULightmassPortalComponent>(TEXT("PortalComponent"));
}

