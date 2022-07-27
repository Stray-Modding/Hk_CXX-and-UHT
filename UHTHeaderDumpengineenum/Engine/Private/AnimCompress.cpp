#include "AnimCompress.h"

UAnimCompress::UAnimCompress() {
    this->bNeedsSkeleton = false;
    this->TranslationCompressionFormat = ACF_None;
    this->RotationCompressionFormat = ACF_Float96NoW;
    this->ScaleCompressionFormat = ACF_None;
}

