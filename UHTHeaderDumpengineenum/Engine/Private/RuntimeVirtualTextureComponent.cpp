#include "RuntimeVirtualTextureComponent.h"

void URuntimeVirtualTextureComponent::Invalidate(const FBoxSphereBounds& WorldBounds) {
}

URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent() {
    this->bSetBoundsButton = false;
    this->bSnapBoundsToLandscape = false;
    this->VirtualTexture = NULL;
    this->bEnableScalability = false;
    this->ScalabilityGroup = 0;
    this->bHidePrimitives = false;
    this->StreamingTexture = NULL;
    this->StreamLowMips = 0;
    this->bBuildStreamingMipsButton = false;
    this->bEnableCompressCrunch = false;
    this->bUseStreamingLowMipsInEditor = false;
    this->bBuildDebugStreamingMips = false;
}

