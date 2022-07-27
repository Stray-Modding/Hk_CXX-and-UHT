#include "MagicLeapPlanesQuery.h"

FMagicLeapPlanesQuery::FMagicLeapPlanesQuery() {
    this->SearchVolume = NULL;
    this->MaxResults = 0;
    this->MinHoleLength = 0.00f;
    this->MinPlaneArea = 0.00f;
    this->SimilarityThreshold = 0.00f;
    this->bSearchVolumeTrackingSpace = false;
    this->bResultTrackingSpace = false;
}

