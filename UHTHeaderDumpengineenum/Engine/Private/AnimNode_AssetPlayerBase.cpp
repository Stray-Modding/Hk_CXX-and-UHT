#include "AnimNode_AssetPlayerBase.h"

FAnimNode_AssetPlayerBase::FAnimNode_AssetPlayerBase() {
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->GroupScope = EAnimSyncGroupScope::Local;
    this->bIgnoreForRelevancyTest = false;
    this->BlendWeight = 0.00f;
    this->InternalTimeAccumulator = 0.00f;
}

