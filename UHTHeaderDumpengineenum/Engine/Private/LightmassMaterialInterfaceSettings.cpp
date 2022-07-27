#include "LightmassMaterialInterfaceSettings.h"

FLightmassMaterialInterfaceSettings::FLightmassMaterialInterfaceSettings() {
    this->EmissiveBoost = 0.00f;
    this->DiffuseBoost = 0.00f;
    this->ExportResolutionScale = 0.00f;
    this->bCastShadowAsMasked = false;
    this->bOverrideCastShadowAsMasked = false;
    this->bOverrideEmissiveBoost = false;
    this->bOverrideDiffuseBoost = false;
    this->bOverrideExportResolutionScale = false;
}

