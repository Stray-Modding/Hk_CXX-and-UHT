#include "MaterialExpressionFunctionInput.h"

UMaterialExpressionFunctionInput::UMaterialExpressionFunctionInput() {
    this->InputName = TEXT("In");
    this->InputType = FunctionInput_Vector3;
    this->bUsePreviewValueAsDefault = false;
    this->SortPriority = 0;
    this->bCompilingFunctionPreview = true;
}

