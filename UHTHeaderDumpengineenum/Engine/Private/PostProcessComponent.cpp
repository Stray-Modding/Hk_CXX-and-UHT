#include "PostProcessComponent.h"

class UBlendableInterface;
class IBlendableInterface;

void UPostProcessComponent::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}

UPostProcessComponent::UPostProcessComponent() {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bEnabled = true;
    this->bUnbound = true;
}

