#include "WindDirectionalSource.h"
#include "WindDirectionalSourceComponent.h"

AWindDirectionalSource::AWindDirectionalSource() {
    this->Component = CreateDefaultSubobject<UWindDirectionalSourceComponent>(TEXT("WindDirectionalSourceComponent0"));
}

