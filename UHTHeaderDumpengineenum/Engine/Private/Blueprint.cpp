#include "Blueprint.h"

UBlueprint::UBlueprint() {
    this->ParentClass = NULL;
    this->BlueprintType = BPTYPE_Normal;
    this->bRecompileOnLoad = true;
    this->bHasBeenRegenerated = false;
    this->bIsRegeneratingOnLoad = false;
    this->BlueprintSystemVersion = 0;
    this->SimpleConstructionScript = NULL;
    this->InheritableComponentHandler = NULL;
}

