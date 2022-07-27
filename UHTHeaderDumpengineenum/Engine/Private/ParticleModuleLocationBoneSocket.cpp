#include "ParticleModuleLocationBoneSocket.h"

UParticleModuleLocationBoneSocket::UParticleModuleLocationBoneSocket() {
    this->SourceType = BONESOCKETSOURCE_Sockets;
    this->SelectionMethod = BONESOCKETSEL_Sequential;
    this->bUpdatePositionEachFrame = false;
    this->bOrientMeshEmitters = true;
    this->bInheritBoneVelocity = false;
    this->InheritVelocityScale = 1.00f;
    this->SkelMeshActorParamName = TEXT("BoneSocketActor");
    this->NumPreSelectedIndices = 10;
}

