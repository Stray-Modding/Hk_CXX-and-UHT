#include "MovieSceneCameraAnimSectionData.h"

FMovieSceneCameraAnimSectionData::FMovieSceneCameraAnimSectionData() {
    this->CameraAnim = NULL;
    this->PlayRate = 0.00f;
    this->PlayScale = 0.00f;
    this->blendInTime = 0.00f;
    this->blendOutTime = 0.00f;
    this->bLooping = false;
}

