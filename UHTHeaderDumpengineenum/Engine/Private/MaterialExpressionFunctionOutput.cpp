#include "MaterialExpressionFunctionOutput.h"

UMaterialExpressionFunctionOutput::UMaterialExpressionFunctionOutput() {
    this->OutputName = TEXT("Result");
    this->SortPriority = 0;
    this->bLastPreviewed = false;
}

