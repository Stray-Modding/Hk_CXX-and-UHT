#include "InterpData.h"

UInterpData::UInterpData() {
    this->InterpLength = 5.00f;
    this->PathBuildTime = 0.00f;
    this->CurveEdSetup = NULL;
    this->EdSectionStart = 0.00f;
    this->EdSectionEnd = 1.00f;
    this->bShouldBakeAndPrune = false;
    this->CachedDirectorGroup = NULL;
}

