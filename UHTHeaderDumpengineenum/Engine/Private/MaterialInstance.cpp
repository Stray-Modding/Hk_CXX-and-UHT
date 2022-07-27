#include "MaterialInstance.h"

UMaterialInstance::UMaterialInstance() {
    this->PhysMaterial = NULL;
    this->PhysicalMaterialMap[0] = NULL;
    this->PhysicalMaterialMap[1] = NULL;
    this->PhysicalMaterialMap[2] = NULL;
    this->PhysicalMaterialMap[3] = NULL;
    this->PhysicalMaterialMap[4] = NULL;
    this->PhysicalMaterialMap[5] = NULL;
    this->PhysicalMaterialMap[6] = NULL;
    this->PhysicalMaterialMap[7] = NULL;
    this->Parent = NULL;
    this->bHasStaticPermutationResource = false;
    this->bOverrideSubsurfaceProfile = false;
}

