#include "BrushBuilder.h"

UBrushBuilder::UBrushBuilder() {
    this->BitmapFilename = TEXT("BBGeneric");
    this->Tooltip = TEXT("BrushBuilderName_Generic");
    this->NotifyBadParams = true;
    this->MergeCoplanars = false;
}

