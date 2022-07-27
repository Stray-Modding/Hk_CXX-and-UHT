#include "DamageType.h"

UDamageType::UDamageType() {
    this->bCausedByWorld = false;
    this->bScaleMomentumByMass = true;
    this->bRadialDamageVelChange = false;
    this->DamageImpulse = 800.00f;
    this->DestructibleImpulse = 800.00f;
    this->DestructibleDamageSpreadScale = 1.00f;
    this->DamageFalloff = 1.00f;
}

