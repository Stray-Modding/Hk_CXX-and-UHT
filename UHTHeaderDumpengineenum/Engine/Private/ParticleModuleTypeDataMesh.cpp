#include "ParticleModuleTypeDataMesh.h"

UParticleModuleTypeDataMesh::UParticleModuleTypeDataMesh() {
    this->Mesh = NULL;
    this->LODSizeScale = 1.00f;
    this->bUseStaticMeshLODs = true;
    this->CastShadows = false;
    this->DoCollisions = false;
    this->MeshAlignment = PSMA_MeshFaceCameraWithRoll;
    this->bOverrideMaterial = false;
    this->bOverrideDefaultMotionBlurSettings = false;
    this->bEnableMotionBlur = false;
    this->AxisLockOption = EPAL_NONE;
    this->bCameraFacing = false;
    this->CameraFacingUpAxisOption = CameraFacing_NoneUP;
    this->CameraFacingOption = XAxisFacing_NoUp;
    this->bApplyParticleRotationAsSpin = false;
    this->bFaceCameraDirectionRatherThanPosition = false;
    this->bCollisionsConsiderPartilceSize = true;
}

