#include "SceneCaptureComponent2D.h"

class UBlendableInterface;
class IBlendableInterface;

void USceneCaptureComponent2D::RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void USceneCaptureComponent2D::CaptureScene() {
}

void USceneCaptureComponent2D::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}

USceneCaptureComponent2D::USceneCaptureComponent2D() {
    this->ProjectionType = ECameraProjectionMode::Perspective;
    this->FOVAngle = 90.00f;
    this->OrthoWidth = 512.00f;
    this->TextureTarget = NULL;
    this->CompositeMode = SCCM_Overwrite;
    this->PostProcessBlendWeight = 1.00f;
    this->bOverride_CustomNearClippingPlane = false;
    this->CustomNearClippingPlane = 0.00f;
    this->bUseCustomProjectionMatrix = false;
    this->bEnableClipPlane = false;
    this->bCameraCutThisFrame = false;
    this->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = false;
    this->bDisableFlipCopyGLES = false;
}

