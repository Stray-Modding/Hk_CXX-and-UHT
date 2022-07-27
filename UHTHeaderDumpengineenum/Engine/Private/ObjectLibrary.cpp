#include "ObjectLibrary.h"

UObjectLibrary::UObjectLibrary() {
    this->ObjectBaseClass = NULL;
    this->bHasBlueprintClasses = false;
    this->bUseWeakReferences = false;
    this->bIsFullyLoaded = false;
}

