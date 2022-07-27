#include "LuminRuntimeSettings.h"

ULuminRuntimeSettings::ULuminRuntimeSettings() {
    this->PackageName = TEXT("com.YourCompany.[PROJECT]");
    this->FrameTimingHint = ELuminFrameTimingHint::FPS_60;
    this->bProtectedContent = false;
    this->bManualCallToAppReady = false;
    this->bUseMobileRendering = true;
    this->bUseVulkan = true;
    this->VersionCode = 1;
    this->MinimumAPILevel = 7;
    this->AppPrivileges.AddDefaulted(12);
    this->SoundCueCookQualityIndex = -1;
    this->bRemoveDebugInfo = true;
    this->bFrameVignette = false;
}

