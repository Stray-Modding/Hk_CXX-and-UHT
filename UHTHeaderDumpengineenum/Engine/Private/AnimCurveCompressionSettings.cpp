#include "AnimCurveCompressionSettings.h"
#include "AnimCurveCompressionCodec_CompressedRichCurve.h"

UAnimCurveCompressionSettings::UAnimCurveCompressionSettings() {
    this->Codec = CreateDefaultSubobject<UAnimCurveCompressionCodec_CompressedRichCurve>(TEXT("CurveCompressionCodec"));
}

