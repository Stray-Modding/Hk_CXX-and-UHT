#include "ParticleModuleLocationSkelVertSurface.h"

UParticleModuleLocationSkelVertSurface::UParticleModuleLocationSkelVertSurface() {
    this->SourceType = VERTSURFACESOURCE_Vert;
    this->bUpdatePositionEachFrame = false;
    this->bOrientMeshEmitters = true;
    this->bInheritBoneVelocity = false;
    this->InheritVelocityScale = 1.00f;
    this->SkelMeshActorParamName = TEXT("VertSurfaceActor");
    this->bEnforceNormalCheck = false;
    this->NormalCheckToleranceDegrees = 0.00f;
    this->NormalCheckTolerance = 0.00f;
    this->bInheritVertexColor = false;
    this->bInheritUV = false;
    this->InheritUVChannel = 0;
}

