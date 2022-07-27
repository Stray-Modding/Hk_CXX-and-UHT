#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EBlendMode.h"
#include "ETextureSizingType.h"
#include "EMaterialMergeType.h"
#include "MaterialProxySettings.generated.h"

USTRUCT(BlueprintType)
struct FMaterialProxySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint TextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float GutterSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MetallicConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RoughnessConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnisotropyConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpecularConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityMaskConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmbientOcclusionConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextureSizingType> TextureSizingType;
    
    UPROPERTY()
    TEnumAsByte<EMaterialMergeType> MaterialMergeType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBlendMode> BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowTwoSidedMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNormalMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bTangentMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMetallicMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRoughnessMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAnisotropyMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSpecularMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEmissiveMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOpacityMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOpacityMaskMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAmbientOcclusionMap: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint DiffuseTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint NormalTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint TangentTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint MetallicTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint RoughnessTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint AnisotropyTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint SpecularTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint EmissiveTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint OpacityTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint OpacityMaskTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FIntPoint AmbientOcclusionTextureSize;
    
    ENGINE_API FMaterialProxySettings();
};

