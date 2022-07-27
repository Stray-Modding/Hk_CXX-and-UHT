#include "LevelBounds.h"
#include "BoxComponent.h"

ALevelBounds::ALevelBounds() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->bAutoUpdateBounds = true;
}

