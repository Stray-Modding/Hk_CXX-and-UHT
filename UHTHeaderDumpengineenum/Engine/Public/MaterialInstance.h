#pragma once
#include "CoreMinimal.h"
#include "RuntimeVirtualTextureParameterValue.h"
#include "MaterialInterface.h"
#include "FontParameterValue.h"
#include "ScalarParameterValue.h"
#include "VectorParameterValue.h"
#include "TextureParameterValue.h"
#include "MaterialInstanceBasePropertyOverrides.h"
#include "StaticParameterSet.h"
#include "MaterialCachedParameters.h"
#include "MaterialInstance.generated.h"

class UPhysicalMaterial;
class UObject;

UCLASS(Abstract, MinimalAPI)
class UMaterialInstance : public UMaterialInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterialMap[8];
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Parent;
    
    UPROPERTY()
    uint8 bHasStaticPermutationResource: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideSubsurfaceProfile: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FScalarParameterValue> ScalarParameterValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVectorParameterValue> VectorParameterValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTextureParameterValue> TextureParameterValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FFontParameterValue> FontParameterValues;
    
    UPROPERTY(EditAnywhere)
    FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;
    
private:
    UPROPERTY()
    FStaticParameterSet StaticParameters;
    
    UPROPERTY()
    FMaterialCachedParameters CachedLayerParameters;
    
    UPROPERTY()
    TArray<UObject*> CachedReferencedTextures;
    
public:
    UMaterialInstance();
};

