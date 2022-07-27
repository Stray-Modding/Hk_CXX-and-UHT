#include "SubUVAnimation.h"

USubUVAnimation::USubUVAnimation() {
    this->SubUVTexture = NULL;
    this->SubImages_Horizontal = 8;
    this->SubImages_Vertical = 8;
    this->BoundingMode = BVC_EightVertices;
    this->OpacitySourceMode = OSM_Alpha;
    this->AlphaThreshold = 0.00f;
}

