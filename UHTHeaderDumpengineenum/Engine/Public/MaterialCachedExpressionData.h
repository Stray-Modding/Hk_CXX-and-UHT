#pragma once
#include "CoreMinimal.h"
#include "MaterialCachedParameters.h"
#include "MaterialParameterCollectionInfo.h"
#include "MaterialFunctionInfo.h"
#include "MaterialCachedExpressionData.generated.h"

class ULandscapeGrassType;
class UObject;
class UMaterialFunctionInterface;

USTRUCT(BlueprintType)
struct FMaterialCachedExpressionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialCachedParameters Parameters;
    
    UPROPERTY()
    TArray<UObject*> ReferencedTextures;
    
    UPROPERTY()
    TArray<FMaterialFunctionInfo> FunctionInfos;
    
    UPROPERTY()
    TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos;
    
    UPROPERTY()
    TArray<UMaterialFunctionInterface*> DefaultLayers;
    
    UPROPERTY()
    TArray<UMaterialFunctionInterface*> DefaultLayerBlends;
    
    UPROPERTY()
    TArray<ULandscapeGrassType*> GrassTypes;
    
    UPROPERTY()
    TArray<FName> DynamicParameterNames;
    
    UPROPERTY()
    TArray<bool> QualityLevelsUsed;
    
    UPROPERTY()
    uint8 bHasRuntimeVirtualTextureOutput: 1;
    
    UPROPERTY()
    uint8 bHasSceneColor: 1;
    
    ENGINE_API FMaterialCachedExpressionData();
};

