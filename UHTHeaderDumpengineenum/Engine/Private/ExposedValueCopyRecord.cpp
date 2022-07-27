#include "ExposedValueCopyRecord.h"

FExposedValueCopyRecord::FExposedValueCopyRecord() {
    this->CopyIndex = 0;
    this->PostCopyOperation = EPostCopyOperation::None;
}

