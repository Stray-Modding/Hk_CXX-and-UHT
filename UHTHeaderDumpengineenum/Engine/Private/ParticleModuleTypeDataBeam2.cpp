#include "ParticleModuleTypeDataBeam2.h"

UParticleModuleTypeDataBeam2::UParticleModuleTypeDataBeam2() {
    this->BeamMethod = PEB2M_Target;
    this->TextureTile = 1;
    this->TextureTileDistance = 0.00f;
    this->Sheets = 1;
    this->MaxBeamCount = 0;
    this->Speed = 10.00f;
    this->InterpolationPoints = 0;
    this->bAlwaysOn = false;
    this->UpVectorStepSize = 0;
    this->TaperMethod = PEBTM_None;
    this->RenderGeometry = true;
    this->RenderDirectLine = false;
    this->RenderLines = false;
    this->RenderTessellation = false;
}

