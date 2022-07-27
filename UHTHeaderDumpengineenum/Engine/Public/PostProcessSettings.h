#pragma once
#include "CoreMinimal.h"
#include "EBloomMethod.h"
#include "ETemperatureMethod.h"
#include "EAutoExposureMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ETranslucencyType.h"
#include "ERayTracingGlobalIlluminationType.h"
#include "EReflectionsType.h"
#include "EReflectedAndRefractedRayTracedShadows.h"
#include "WeightedBlendables.h"
#include "PostProcessSettings.generated.h"

class UTexture;
class UTexture2D;
class UTextureCube;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_TemperatureType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_WhiteTemp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_WhiteTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorSaturation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorContrast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGamma: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGain: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorOffset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorSaturationShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorContrastShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGammaShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGainShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorOffsetShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorSaturationMidtones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorContrastMidtones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGammaMidtones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGainMidtones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorOffsetMidtones: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorSaturationHighlights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorContrastHighlights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGammaHighlights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGainHighlights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorOffsetHighlights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorCorrectionShadowsMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorCorrectionHighlightsMin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BlueCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ExpandGamut: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ToneCurveAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmWhitePoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmSaturation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmChannelMixerRed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmChannelMixerGreen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmChannelMixerBlue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmContrast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmDynamicRange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmHealAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmToeAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmShadowTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmShadowTintBlend: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmShadowTintAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmSlope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmToe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmShoulder: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmBlackClip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmWhiteClip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_SceneColorTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_SceneFringeIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ChromaticAberrationStartOffset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientCubemapTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientCubemapIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomMethod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomThreshold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom1Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom1Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom2Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom2Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom3Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom3Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom4Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom4Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom5Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom5Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom6Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Bloom6Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomSizeScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionCenterUV: 1;
    
    UPROPERTY()
    uint8 bOverride_BloomConvolutionPreFilter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionPreFilterMin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionPreFilterMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionPreFilterMult: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomConvolutionBufferScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomDirtMaskIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomDirtMaskTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_BloomDirtMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_CameraShutterSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_CameraISO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureMethod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureLowPercent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureHighPercent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureMinBrightness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureMaxBrightness: 1;
    
    UPROPERTY()
    uint8 bOverride_AutoExposureCalibrationConstant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureSpeedUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureSpeedDown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureBiasCurve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureMeterMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AutoExposureApplyPhysicalCameraExposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_HistogramLogMin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_HistogramLogMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LensFlareIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LensFlareTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LensFlareTints: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LensFlareBokehSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LensFlareBokehShape: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LensFlareThreshold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_VignetteIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_GrainIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_GrainJitter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionStaticFraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionFadeDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionFadeRadius: 1;
    
    UPROPERTY()
    uint8 bOverride_AmbientOcclusionDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionRadiusInWS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionPower: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionQuality: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionMipBlend: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionMipScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionMipThreshold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_AmbientOcclusionTemporalBlendWeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingAO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingAOSamplesPerPixel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingAOIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingAORadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVIntensity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_LPVDirectionalOcclusionIntensity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_LPVDirectionalOcclusionRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_LPVDiffuseOcclusionExponent: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_LPVSpecularOcclusionExponent: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_LPVDiffuseOcclusionIntensity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_LPVSpecularOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSecondaryOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSecondaryBounceIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVGeometryVolumeBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVVplInjectionBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVEmissiveInjectionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVFadeRange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVDirectionalOcclusionFadeRange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_IndirectLightingColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_IndirectLightingIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGradingIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGradingLUT: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFocalDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFstop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldMinFstop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldBladeCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldSensorWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldDepthBlurRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldDepthBlurAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFocalRegion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldNearTransitionRegion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFarTransitionRegion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldNearBlurSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFarBlurSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_MobileHQGaussian: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldOcclusion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldSkyFocusDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldVignetteSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_MotionBlurAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_MotionBlurMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_MotionBlurTargetFPS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_MotionBlurPerObjectSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ScreenPercentage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ScreenSpaceReflectionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ScreenSpaceReflectionQuality: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ScreenSpaceReflectionMaxRoughness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ScreenSpaceReflectionRoughnessScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ReflectionsType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingReflectionsMaxRoughness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingReflectionsMaxBounces: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingReflectionsSamplesPerPixel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingReflectionsShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingReflectionsTranslucency: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_TranslucencyType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingTranslucencyMaxRoughness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingTranslucencyRefractionRays: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingTranslucencySamplesPerPixel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingTranslucencyShadows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingTranslucencyRefraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingGI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingGIMaxBounces: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RayTracingGISamplesPerPixel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_PathTracingMaxBounces: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_PathTracingSamplesPerPixel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_PathTracingFilterWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_PathTracingEnableEmissive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_PathTracingMaxPathExposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_PathTracingEnableDenoiser: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMobileHQGaussian: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBloomMethod> BloomMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<ETemperatureMethod> TemperatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WhiteTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WhiteTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturationShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGammaShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGainShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffsetShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturationMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrastMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGammaMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGainMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffsetMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturationHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrastHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGammaHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGainHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffsetHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ColorCorrectionHighlightsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ColorCorrectionShadowsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlueCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ExpandGamut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ToneCurveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmToe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmBlackClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmWhiteClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FilmWhitePoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FilmShadowTint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float FilmShadowTintBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float FilmShadowTintAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmSaturation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FilmChannelMixerRed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FilmChannelMixerGreen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FilmChannelMixerBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmContrast;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float FilmToeAmount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float FilmHealAmount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float FilmDynamicRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor SceneColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SceneFringeIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ChromaticAberrationStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomSizeScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float Bloom1Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float Bloom2Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float Bloom3Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float Bloom4Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float Bloom5Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float Bloom6Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Bloom1Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Bloom2Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Bloom3Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Bloom4Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Bloom5Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Bloom6Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomConvolutionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* BloomConvolutionTexture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FVector2D BloomConvolutionCenterUV;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomConvolutionPreFilterMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomConvolutionPreFilterMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomConvolutionPreFilterMult;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BloomConvolutionBufferScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* BloomDirtMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomDirtMaskIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor BloomDirtMaskTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor AmbientCubemapTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientCubemapIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureCube* AmbientCubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraShutterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraISO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFstop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldMinFstop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 DepthOfFieldBladeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureBias;
    
    UPROPERTY()
    float AutoExposureBiasBackup;
    
    UPROPERTY()
    uint8 bOverride_AutoExposureBiasBackup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AutoExposureApplyPhysicalCameraExposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AutoExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* AutoExposureMeterMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureHighPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HistogramLogMax;
    
    UPROPERTY()
    float AutoExposureCalibrationConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LensFlareIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LensFlareTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LensFlareBokehSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LensFlareThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* LensFlareBokehShape;
    
    UPROPERTY(EditAnywhere)
    FLinearColor LensFlareTints[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VignetteIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float GrainJitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float GrainIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionStaticFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 AmbientOcclusionRadiusInWS: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionFadeDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionFadeRadius;
    
    UPROPERTY()
    float AmbientOcclusionDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionPower;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionQuality;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionMipBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionMipScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionMipThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AmbientOcclusionTemporalBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 RayTracingAO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingAOSamplesPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayTracingAOIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayTracingAORadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor IndirectLightingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float IndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    ERayTracingGlobalIlluminationType RayTracingGIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingGIMaxBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingGISamplesPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ColorGradingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ColorGradingLUT;
    
    UPROPERTY(BlueprintReadWrite)
    float DepthOfFieldSensorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFocalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldDepthBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldDepthBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFocalRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldNearTransitionRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFarTransitionRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldNearBlurSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFarBlurSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldOcclusion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldSkyFocusDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldVignetteSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MotionBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MotionBlurMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MotionBlurTargetFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MotionBlurPerObjectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVVplInjectionBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPVSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSecondaryOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSecondaryBounceIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVGeometryVolumeBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVEmissiveInjectionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDirectionalOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDirectionalOcclusionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDiffuseOcclusionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSpecularOcclusionExponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDiffuseOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSpecularOcclusionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    EReflectionsType ReflectionsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ScreenSpaceReflectionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ScreenSpaceReflectionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ScreenSpaceReflectionMaxRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayTracingReflectionsMaxRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingReflectionsMaxBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingReflectionsSamplesPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 RayTracingReflectionsTranslucency: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    ETranslucencyType TranslucencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayTracingTranslucencyMaxRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingTranslucencyRefractionRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 RayTracingTranslucencySamplesPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 RayTracingTranslucencyRefraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 PathTracingMaxBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 PathTracingSamplesPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PathTracingFilterWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 PathTracingEnableEmissive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PathTracingMaxPathExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 PathTracingEnableDenoiser: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVFadeRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDirectionalOcclusionFadeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeightedBlendables WeightedBlendables;
    
    ENGINE_API FPostProcessSettings();
};

