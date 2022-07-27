#include "Font.h"

UFont::UFont() {
    this->FontCacheType = EFontCacheType::Offline;
    this->IsRemapped = 0;
    this->EmScale = 0.00f;
    this->Ascent = 0.00f;
    this->Descent = 0.00f;
    this->Leading = 0.00f;
    this->Kerning = 0;
    this->NumCharacters = 0;
    this->ScalingFactor = 1.00f;
    this->LegacyFontSize = 9;
}

