#pragma once
#include "CoreMinimal.h"
#include "EBlendMode.h"
#include "EMaterialDomain.h"
#include "MaterialInterface.h"
#include "ColorMaterialInput.h"
#include "ERefractionMode.h"
#include "ShadingModelMaterialInput.h"
#include "ScalarMaterialInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EBlendableLocation.h"
#include "VectorMaterialInput.h"
#include "EDecalBlendMode.h"
#include "EMaterialDecalResponse.h"
#include "EMaterialShadingModel.h"
#include "MaterialShadingModelField.h"
#include "MaterialAttributesInput.h"
#include "ETranslucencyLightingMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EMaterialStencilCompare.h"
#include "EMaterialTessellationMode.h"
#include "EMaterialShadingRate.h"
#include "MaterialCachedExpressionData.h"
#include "Material.generated.h"

class UPhysicalMaterialMask;
class UPhysicalMaterial;

UCLASS(MinimalAPI)
class UMaterial : public UMaterialInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterialMask* PhysMaterialMask;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterialMap[8];
    
    UPROPERTY()
    FScalarMaterialInput Metallic;
    
    UPROPERTY()
    FScalarMaterialInput Specular;
    
    UPROPERTY()
    FScalarMaterialInput Anisotropy;
    
    UPROPERTY()
    FVectorMaterialInput Normal;
    
    UPROPERTY()
    FVectorMaterialInput Tangent;
    
    UPROPERTY()
    FColorMaterialInput EmissiveColor;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMaterialDomain> MaterialDomain;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EBlendMode> BlendMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDecalBlendMode> DecalBlendMode;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMaterialDecalResponse> MaterialDecalResponse;
    
private:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bCastDynamicShadowAsMasked: 1;
    
private:
    UPROPERTY(AssetRegistrySearchable)
    FMaterialShadingModelField ShadingModels;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float OpacityMaskClipValue;
    
    UPROPERTY()
    FVectorMaterialInput WorldPositionOffset;
    
    UPROPERTY()
    FScalarMaterialInput Refraction;
    
    UPROPERTY()
    FMaterialAttributesInput MaterialAttributes;
    
    UPROPERTY()
    FScalarMaterialInput PixelDepthOffset;
    
    UPROPERTY()
    FShadingModelMaterialInput ShadingModelFromMaterialExpression;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableSeparateTranslucency: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableResponsiveAA: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScreenSpaceReflections: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bContactShadows: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 TwoSided: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 DitheredLODTransition: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 DitherOpacityMask: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowNegativeEmissiveColor: 1;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<ETranslucencyLightingMode> TranslucencyLightingMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableMobileSeparateTranslucency: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumCustomizedUVs;
    
    UPROPERTY(EditAnywhere)
    float TranslucencyDirectionalLightingIntensity;
    
    UPROPERTY(EditAnywhere)
    float TranslucentShadowDensityScale;
    
    UPROPERTY(EditAnywhere)
    float TranslucentSelfShadowDensityScale;
    
    UPROPERTY(EditAnywhere)
    float TranslucentSelfShadowSecondDensityScale;
    
    UPROPERTY(EditAnywhere)
    float TranslucentSelfShadowSecondOpacity;
    
    UPROPERTY(EditAnywhere)
    float TranslucentBackscatteringExponent;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TranslucentMultipleScatteringExtinction;
    
    UPROPERTY(EditAnywhere)
    float TranslucentShadowStartOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDisableDepthTest: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bWriteOnlyAlpha: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bGenerateSphericalParticleNormals: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bTangentSpaceNormal: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseEmissiveForDynamicAreaLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bBlockGI: 1;
    
    UPROPERTY(DuplicateTransient)
    uint8 bUsedAsSpecialEngineMaterial: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithSkeletalMesh: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithEditorCompositing: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithParticleSprites: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithBeamTrails: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithMeshParticles: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithNiagaraSprites: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithNiagaraRibbons: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithNiagaraMeshParticles: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithGeometryCache: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithStaticLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithMorphTargets: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithSplineMeshes: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithInstancedStaticMeshes: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithGeometryCollections: 1;
    
    UPROPERTY()
    uint8 bUsesDistortion: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithClothing: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithWater: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithHairStrands: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithLidarPointCloud: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsedWithVirtualHeightfieldMesh: 1;
    
    UPROPERTY()
    uint8 bUsedWithUI: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAutomaticallySetUsageInEditor: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bFullyRough: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseFullPrecision: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseLightmapDirectionality: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseAlphaToCoverage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bForwardRenderUsePreintegratedGFForSimpleIBL: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseHQForwardReflections: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bForwardBlendsSkyLightCubemaps: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsePlanarForwardReflections: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bNormalCurvatureToRoughness: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMaterialTessellationMode> D3D11TessellationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableCrackFreeDisplacement: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableAdaptiveTessellation: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 AllowTranslucentCustomDepthWrites: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 Wireframe: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 WriteDepthToTranslucentMaterial: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EMaterialShadingRate> ShadingRate;
    
    UPROPERTY()
    uint8 bCanMaskedBeAssumedOpaque: 1;
    
    UPROPERTY()
    uint8 bIsMasked: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint8 bIsPreviewMaterial: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint8 bIsFunctionPreviewMaterial: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMaterialAttributes: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCastRayTracedShadows: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseTranslucencyVertexFog: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyCloudFogging: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bIsSky: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bComputeFogPerPixel: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOutputTranslucentVelocity: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint8 bAllowDevelopmentShaderCompile: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint8 bIsMaterialEditorStatsMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBlendableLocation> BlendableLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 BlendableOutputAlpha: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableStencilTest: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EMaterialStencilCompare> StencilCompare;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 StencilRefValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERefractionMode> RefractionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BlendablePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsBlendable: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint32 UsageFlagWarnings;
    
    UPROPERTY(EditAnywhere)
    float RefractionDepthBias;
    
    UPROPERTY()
    FGuid StateId;
    
    UPROPERTY(EditAnywhere)
    float MaxDisplacement;
    
private:
    UPROPERTY()
    FMaterialCachedExpressionData CachedExpressionData;
    
public:
    UMaterial();
};

