#include "FontImportOptionsData.h"

FFontImportOptionsData::FFontImportOptionsData() {
    this->Height = 0.00f;
    this->bEnableAntialiasing = false;
    this->bEnableBold = false;
    this->bEnableItalic = false;
    this->bEnableUnderline = false;
    this->bAlphaOnly = false;
    this->CharacterSet = FontICS_Default;
    this->bCreatePrintableOnly = false;
    this->bIncludeASCIIRange = false;
    this->bEnableDropShadow = false;
    this->TexturePageWidth = 0;
    this->TexturePageMaxHeight = 0;
    this->XPadding = 0;
    this->YPadding = 0;
    this->ExtendBoxTop = 0;
    this->ExtendBoxBottom = 0;
    this->ExtendBoxRight = 0;
    this->ExtendBoxLeft = 0;
    this->bEnableLegacyMode = false;
    this->Kerning = 0;
    this->bUseDistanceFieldAlpha = false;
    this->DistanceFieldScaleFactor = 0;
    this->DistanceFieldScanRadiusScale = 0.00f;
}

