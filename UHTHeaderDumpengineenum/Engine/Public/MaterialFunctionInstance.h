#pragma once
#include "CoreMinimal.h"
#include "MaterialFunctionInterface.h"
#include "VectorParameterValue.h"
#include "ScalarParameterValue.h"
#include "TextureParameterValue.h"
#include "StaticSwitchParameter.h"
#include "FontParameterValue.h"
#include "StaticComponentMaskParameter.h"
#include "RuntimeVirtualTextureParameterValue.h"
#include "MaterialFunctionInstance.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UMaterialFunctionInstance : public UMaterialFunctionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    UMaterialFunctionInterface* Parent;
    
    UPROPERTY(AssetRegistrySearchable)
    UMaterialFunctionInterface* Base;
    
    UPROPERTY(EditAnywhere)
    TArray<FScalarParameterValue> ScalarParameterValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FVectorParameterValue> VectorParameterValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FTextureParameterValue> TextureParameterValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FFontParameterValue> FontParameterValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FStaticSwitchParameter> StaticSwitchParameterValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
    
    UMaterialFunctionInstance();
};

