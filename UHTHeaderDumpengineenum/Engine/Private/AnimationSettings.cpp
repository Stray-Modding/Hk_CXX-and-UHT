#include "AnimationSettings.h"

UAnimationSettings::UAnimationSettings() {
    this->CompressCommandletVersion = 2;
    this->KeyEndEffectorsMatchNameArray.AddDefaulted(6);
    this->ForceRecompression = false;
    this->bForceBelowThreshold = false;
    this->bFirstRecompressUsingCurrentOrDefault = true;
    this->bRaiseMaxErrorToExisting = false;
    this->bEnablePerformanceLog = false;
    this->bStripAnimationDataOnDedicatedServer = false;
    this->bTickAnimationOnSkeletalMeshInit = true;
    this->BoneCustomAttributesNames.AddDefaulted(6);
    this->DefaultAttributeBlendMode = ECustomAttributeBlendType::Override;
}

