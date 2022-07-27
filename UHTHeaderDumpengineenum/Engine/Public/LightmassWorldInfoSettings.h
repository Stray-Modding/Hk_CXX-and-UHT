#pragma once
#include "CoreMinimal.h"
#include "EVolumeLightingMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "LightmassWorldInfoSettings.generated.h"

USTRUCT()
struct FLightmassWorldInfoSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float StaticLightingLevelScale;
    
    UPROPERTY(EditAnywhere)
    int32 NumIndirectLightingBounces;
    
    UPROPERTY(EditAnywhere)
    int32 NumSkyLightingBounces;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float IndirectLightingQuality;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float IndirectLightingSmoothness;
    
    UPROPERTY(EditAnywhere)
    FColor EnvironmentColor;
    
    UPROPERTY(EditAnywhere)
    float EnvironmentIntensity;
    
    UPROPERTY()
    float EmissiveBoost;
    
    UPROPERTY(EditAnywhere)
    float DiffuseBoost;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVolumeLightingMethod> VolumeLightingMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseAmbientOcclusion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGenerateAmbientOcclusionMaterialMask: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bVisualizeMaterialDiffuse: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bVisualizeAmbientOcclusion: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bCompressLightmaps: 1;
    
    UPROPERTY(EditAnywhere)
    float VolumetricLightmapDetailCellSize;
    
    UPROPERTY(EditAnywhere)
    float VolumetricLightmapMaximumBrickMemoryMb;
    
    UPROPERTY(EditAnywhere)
    float VolumetricLightmapSphericalHarmonicSmoothing;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float VolumeLightSamplePlacementScale;
    
    UPROPERTY(EditAnywhere)
    float DirectIlluminationOcclusionFraction;
    
    UPROPERTY(EditAnywhere)
    float IndirectIlluminationOcclusionFraction;
    
    UPROPERTY(EditAnywhere)
    float OcclusionExponent;
    
    UPROPERTY(EditAnywhere)
    float FullyOccludedSamplesFraction;
    
    UPROPERTY(EditAnywhere)
    float MaxOcclusionDistance;
    
    ENGINE_API FLightmassWorldInfoSettings();
};

