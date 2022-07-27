#include "RuntimeVirtualTextureVolume.h"
#include "RuntimeVirtualTextureComponent.h"

ARuntimeVirtualTextureVolume::ARuntimeVirtualTextureVolume() {
    this->VirtualTextureComponent = CreateDefaultSubobject<URuntimeVirtualTextureComponent>(TEXT("VirtualTextureComponent"));
}

