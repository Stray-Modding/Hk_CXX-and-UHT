#include "SkyLight.h"
#include "Net/UnrealNetwork.h"
#include "SkyLightComponent.h"

void ASkyLight::OnRep_bEnabled() {
}

void ASkyLight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkyLight, bEnabled);
}

ASkyLight::ASkyLight() {
    this->LightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->bEnabled = false;
}

