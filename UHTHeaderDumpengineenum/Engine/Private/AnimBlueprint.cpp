#include "AnimBlueprint.h"

UAnimBlueprint::UAnimBlueprint() {
    this->TargetSkeleton = NULL;
    this->bUseMultiThreadedAnimationUpdate = true;
    this->bWarnAboutBlueprintUsage = false;
}

