#include "LightmassWorldInfoSettings.h"

FLightmassWorldInfoSettings::FLightmassWorldInfoSettings() {
    this->StaticLightingLevelScale = 0.00f;
    this->NumIndirectLightingBounces = 0;
    this->NumSkyLightingBounces = 0;
    this->IndirectLightingQuality = 0.00f;
    this->IndirectLightingSmoothness = 0.00f;
    this->EnvironmentIntensity = 0.00f;
    this->EmissiveBoost = 0.00f;
    this->DiffuseBoost = 0.00f;
    this->VolumeLightingMethod = VLM_VolumetricLightmap;
    this->bUseAmbientOcclusion = false;
    this->bGenerateAmbientOcclusionMaterialMask = false;
    this->bVisualizeMaterialDiffuse = false;
    this->bVisualizeAmbientOcclusion = false;
    this->bCompressLightmaps = false;
    this->VolumetricLightmapDetailCellSize = 0.00f;
    this->VolumetricLightmapMaximumBrickMemoryMb = 0.00f;
    this->VolumetricLightmapSphericalHarmonicSmoothing = 0.00f;
    this->VolumeLightSamplePlacementScale = 0.00f;
    this->DirectIlluminationOcclusionFraction = 0.00f;
    this->IndirectIlluminationOcclusionFraction = 0.00f;
    this->OcclusionExponent = 0.00f;
    this->FullyOccludedSamplesFraction = 0.00f;
    this->MaxOcclusionDistance = 0.00f;
}

