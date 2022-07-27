#include "VolumetricCloud.h"
#include "VolumetricCloudComponent.h"

AVolumetricCloud::AVolumetricCloud() {
    this->VolumetricCloudComponent = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricCloudComponent"));
}

