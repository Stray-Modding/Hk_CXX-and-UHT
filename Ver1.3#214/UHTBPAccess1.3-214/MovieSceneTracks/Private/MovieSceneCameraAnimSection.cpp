#include "MovieSceneCameraAnimSection.h"

UMovieSceneCameraAnimSection::UMovieSceneCameraAnimSection() {
    this->CameraAnim = NULL;
    this->PlayRate = 1.00f;
    this->PlayScale = 1.00f;
    this->blendInTime = 0.00f;
    this->blendOutTime = 0.00f;
    this->bLooping = false;
}

