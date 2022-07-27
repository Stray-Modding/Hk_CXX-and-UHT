#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ECustomDepthStencil.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EMobileMSAASampleCount.h"
#include "EFixedFoveationLevels.h"
#include "ETranslucentSortPolicy.h"
#include "EEarlyZPass.h"
#include "EAutoExposureMethodUI.h"
#include "EAlphaChannelMode.h"
#include "EAntiAliasingMethod.h"
#include "ELightUnits.h"
#include "PerPlatformInt.h"
#include "EDefaultBackBufferPixelFormat.h"
#include "EClearSceneOptions.h"
#include "EGBufferFormat.h"
#include "ESkinCacheDefaultBehavior.h"
#include "EMobilePlanarReflectionMode.h"
#include "PerPlatformBool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "RendererSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API URendererSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileDisableVertexFog: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxMobileCascades;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EMobileMSAASampleCount::Type> MobileMSAASampleCount;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAllowDitheredLODTransition: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAllowSoftwareOcclusionCulling: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileVirtualTextures: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDiscardUnusedQualityLevels: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bOcclusionCulling: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float MinScreenRadiusForLights;
    
    UPROPERTY(Config, EditAnywhere)
    float MinScreenRadiusForEarlyZPass;
    
    UPROPERTY(Config, EditAnywhere)
    float MinScreenRadiusForCSMdepth;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bPrecomputedVisibilityWarning: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bTextureStreaming: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseDXT5NormalMaps: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVirtualTextures: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVirtualTextureEnableAutoImport: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVirtualTexturedLightmaps: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 VirtualTextureTileSize;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 VirtualTextureTileBorderSize;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 VirtualTextureFeedbackFactor;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVirtualTextureEnableCompressZlib: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVirtualTextureEnableCompressCrunch: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bClearCoatEnableSecondNormal: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ReflectionCaptureResolution;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bReflectionCaptureCompression: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ReflectionEnvironmentLightmapMixBasedOnRoughness: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bForwardShading: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVertexFoggingForOpaque: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAllowStaticLighting: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseNormalMapsForStaticLighting: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bGenerateMeshDistanceFields: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEightBitMeshDistanceFields: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bGenerateLandscapeGIData: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bCompressMeshDistanceFields: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float TessellationAdaptivePixelsPerTriangle;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSeparateTranslucency: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETranslucentSortPolicy::Type> TranslucentSortPolicy;
    
    UPROPERTY(Config, EditAnywhere)
    FVector TranslucentSortAxis;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EFixedFoveationLevels::Type> HMDFixedFoveationLevel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECustomDepthStencil::Type> CustomDepthStencil;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bCustomDepthTaaJitter: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EAlphaChannelMode::Type> bEnableAlphaChannelInPostProcessing;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultFeatureBloom: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultFeatureAmbientOcclusion: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultFeatureAmbientOcclusionStaticFraction: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultFeatureAutoExposure: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EAutoExposureMethodUI::Type> DefaultFeatureAutoExposure;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultFeatureAutoExposureBias;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bExtendDefaultLuminanceRangeInAutoExposureSettings: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUsePreExposure: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEnablePreExposureOnlyInTheEditor: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultFeatureMotionBlur: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultFeatureLensFlare: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bTemporalUpsampling: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSSGI: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EAntiAliasingMethod> DefaultFeatureAntiAliasing;
    
    UPROPERTY(Config, EditAnywhere)
    ELightUnits DefaultLightUnits;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TEnumAsByte<EDefaultBackBufferPixelFormat::Type> DefaultBackBufferPixelFormat;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bRenderUnbuiltPreviewShadowsInGame: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bStencilForLODDither: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EEarlyZPass::Type> EarlyZPass;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEarlyZPassOnlyMaterialMasking: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDBuffer: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EClearSceneOptions::Type> ClearSceneMethod;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bBasePassOutputsVelocity: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bVertexDeformationOutputsVelocity: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSelectiveBasePassOutputs: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDefaultParticleCutouts: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 GPUSimulationTextureSizeX;
    
    UPROPERTY(Config, EditAnywhere)
    int32 GPUSimulationTextureSizeY;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bGlobalClipPlane: 1;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EGBufferFormat::Type> GBufferFormat;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseGPUMorphTargets: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bNvidiaAftermathEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMultiView: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobilePostProcessing: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileMultiView: 1;
    
    UPROPERTY(Config)
    uint8 bMobileUseHWsRGBEncoding: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bRoundRobinOcclusion: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bODSCapture: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMeshStreaming: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float WireframeCullThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEnableRayTracing: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEnableRayTracingTextureLOD: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportStationarySkylight: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportLowQualityLightmaps: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportPointLightWholeSceneShadows: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportAtmosphericFog: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportSkyAtmosphere: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportSkyAtmosphereAffectsHeightFog: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportSkinCacheShaders: 1;
    
    UPROPERTY(Config, EditAnywhere)
    ESkinCacheDefaultBehavior DefaultSkinCacheBehavior;
    
    UPROPERTY(Config, EditAnywhere)
    float SkinCacheSceneMemoryLimitInMB;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileEnableStaticAndCSMShadowReceivers: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileEnableMovableLightCSMShaderCulling: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAllowDistanceFieldShadows: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAllowMovableDirectionalLights: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 MobileNumDynamicPointLights;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileDynamicPointLightsUseStaticBranch: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAllowMovableSpotlights: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAllowMovableSpotlightShadows: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupport16BitBoneIndex: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bGPUSkinLimit2BoneInfluences: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportDepthOnlyIndexBuffers: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportReversedIndexBuffers: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bLPV: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileAmbientOcclusion: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseUnlimitedBoneInfluences: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UnlimitedBonInfluencesThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    FPerPlatformInt MaxSkinBones;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EMobilePlanarReflectionMode::Type> MobilePlanarReflectionMode;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bMobileSupportsGen4TAA: 1;
    
    UPROPERTY(Config, EditAnywhere)
    FPerPlatformBool bStreamSkeletalMeshLODs;
    
    UPROPERTY(Config, EditAnywhere)
    FPerPlatformBool bDiscardSkeletalMeshOptionalLODs;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath VisualizeCalibrationColorMaterialPath;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath VisualizeCalibrationCustomMaterialPath;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath;
    
    URendererSettings();
};

