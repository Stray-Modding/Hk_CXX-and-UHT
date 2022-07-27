#include "ParticleModule.h"

UParticleModule::UParticleModule() {
    this->bSpawnModule = false;
    this->bUpdateModule = false;
    this->bFinalUpdateModule = false;
    this->bUpdateForGPUEmitter = false;
    this->bCurvesAsColor = false;
    this->b3DDrawMode = false;
    this->bSupported3DDrawMode = false;
    this->bEnabled = true;
    this->bEditable = true;
    this->LODDuplicate = true;
    this->bSupportsRandomSeed = false;
    this->bRequiresLoopingNotification = false;
    this->LODValidity = 0;
}

