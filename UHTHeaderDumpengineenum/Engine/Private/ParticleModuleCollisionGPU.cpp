#include "ParticleModuleCollisionGPU.h"

UParticleModuleCollisionGPU::UParticleModuleCollisionGPU() {
    this->Friction = 0.00f;
    this->RandomSpread = 0.00f;
    this->RandomDistribution = 2.00f;
    this->RadiusScale = 1.00f;
    this->RadiusBias = 0.00f;
    this->Response = EParticleCollisionResponse::Bounce;
    this->CollisionMode = EParticleCollisionMode::SceneDepth;
}

