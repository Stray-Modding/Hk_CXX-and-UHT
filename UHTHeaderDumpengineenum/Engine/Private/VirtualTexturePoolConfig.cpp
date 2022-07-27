#include "VirtualTexturePoolConfig.h"

UVirtualTexturePoolConfig::UVirtualTexturePoolConfig() {
    this->DefaultSizeInMegabyte = 64;
    this->Pools.AddDefaulted(2);
}

