#include "WorldComposition.h"

UWorldComposition::UWorldComposition() {
    this->TilesStreamingTimeThreshold = 1.00f;
    this->bLoadAllTilesDuringCinematic = false;
    this->bRebaseOriginIn3DSpace = false;
    this->RebaseOriginDistance = 524287.50f;
}

