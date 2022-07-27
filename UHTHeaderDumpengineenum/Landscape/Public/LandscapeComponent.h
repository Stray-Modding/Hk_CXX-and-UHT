#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "LandscapeComponentMaterialOverride.h"
#include "WeightmapLayerAllocationInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LandscapeComponent.generated.h"

class UMaterialInterface;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UTexture2D;
class ULandscapeHeightfieldCollisionComponent;
class ULandscapeLODStreamingProxy;
class ULandscapeLayerInfoObject;

UCLASS(MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SectionBaseX;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SectionBaseY;
    
    UPROPERTY()
    int32 ComponentSizeQuads;
    
    UPROPERTY()
    int32 SubsectionSizeQuads;
    
    UPROPERTY()
    int32 NumSubsections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverrideHoleMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;
    
    UPROPERTY(TextExportTransient)
    TArray<UMaterialInstanceConstant*> MaterialInstances;
    
    UPROPERTY(TextExportTransient, Transient)
    TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic;
    
    UPROPERTY(TextExportTransient)
    TArray<int8> LODIndexToMaterialIndex;
    
    UPROPERTY(TextExportTransient)
    TArray<int8> MaterialIndexToDisabledTessellationMaterial;
    
    UPROPERTY(TextExportTransient)
    UTexture2D* XYOffsetmapTexture;
    
    UPROPERTY()
    FVector4 WeightmapScaleBias;
    
    UPROPERTY()
    float WeightmapSubsectionOffset;
    
    UPROPERTY()
    FVector4 HeightmapScaleBias;
    
    UPROPERTY()
    FBox CachedLocalBox;
    
    UPROPERTY(Export)
    TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent;
    
private:
    UPROPERTY(TextExportTransient)
    UTexture2D* HeightmapTexture;
    
    UPROPERTY()
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
    
    UPROPERTY(TextExportTransient)
    TArray<UTexture2D*> WeightmapTextures;
    
    UPROPERTY()
    ULandscapeLODStreamingProxy* LODStreamingProxy;
    
public:
    UPROPERTY()
    FGuid MapBuildDataId;
    
    UPROPERTY()
    TArray<FGuid> IrrelevantLights;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    int32 SimpleCollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    float NegativeZBoundsExtension;
    
    UPROPERTY(EditAnywhere)
    float PositiveZBoundsExtension;
    
    UPROPERTY(EditAnywhere)
    float StaticLightingResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ForcedLOD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LODBias;
    
    UPROPERTY()
    FGuid StateId;
    
    UPROPERTY()
    FGuid BakedTextureMaterialGuid;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTexture2D* GIBakedBaseColorTexture;
    
    UPROPERTY()
    uint8 MobileBlendableLayerMask;
    
    UPROPERTY(NonPIEDuplicateTransient)
    UMaterialInterface* MobileMaterialInterface;
    
    UPROPERTY(NonPIEDuplicateTransient)
    TArray<UMaterialInterface*> MobileMaterialInterfaces;
    
    UPROPERTY(NonPIEDuplicateTransient)
    TArray<UTexture2D*> MobileWeightmapTextures;
    
    ULandscapeComponent();
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);
    
};

