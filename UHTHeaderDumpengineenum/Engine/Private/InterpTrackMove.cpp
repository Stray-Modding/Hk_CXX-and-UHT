#include "InterpTrackMove.h"

UInterpTrackMove::UInterpTrackMove() {
    this->LinCurveTension = 0.00f;
    this->AngCurveTension = 0.00f;
    this->bUseQuatInterpolation = false;
    this->bShowArrowAtKeys = false;
    this->bDisableMovement = false;
    this->bShowTranslationOnCurveEd = true;
    this->bShowRotationOnCurveEd = false;
    this->bHide3DTrack = false;
    this->RotMode = IMR_Keyframed;
}

