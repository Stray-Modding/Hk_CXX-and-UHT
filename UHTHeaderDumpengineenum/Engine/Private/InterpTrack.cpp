#include "InterpTrack.h"
#include "InterpTrackInst.h"

UInterpTrack::UInterpTrack() {
    this->TrackInstClass = UInterpTrackInst::StaticClass();
    this->ActiveCondition = ETAC_Always;
    this->TrackTitle = TEXT("Track");
    this->bOnePerGroup = false;
    this->bDirGroupOnly = false;
    this->bDisableTrack = false;
    this->bIsSelected = false;
    this->bIsAnimControlTrack = false;
    this->bSubTrackOnly = false;
    this->bVisible = true;
    this->bIsRecording = false;
}

