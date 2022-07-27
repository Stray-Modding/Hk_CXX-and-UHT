#include "PhysicsAsset.h"

UPhysicsAsset::UPhysicsAsset() {
    this->SolverType = EPhysicsAssetSolverType::World;
    this->bNotForDedicatedServer = false;
    this->ThumbnailInfo = NULL;
}

