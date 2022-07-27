#include "AnimNode_ApplyMeshSpaceAdditive.h"

FAnimNode_ApplyMeshSpaceAdditive::FAnimNode_ApplyMeshSpaceAdditive() {
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->Alpha = 0.00f;
    this->bAlphaBoolEnabled = false;
    this->LODThreshold = 0;
}

