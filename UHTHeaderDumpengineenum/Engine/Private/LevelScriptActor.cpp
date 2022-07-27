#include "LevelScriptActor.h"


void ALevelScriptActor::SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

bool ALevelScriptActor::RemoteEvent(FName EventName) {
    return false;
}


ALevelScriptActor::ALevelScriptActor() {
    this->bInputEnabled = true;
}

