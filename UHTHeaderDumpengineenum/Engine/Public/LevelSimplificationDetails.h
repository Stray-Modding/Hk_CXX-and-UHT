#pragma once
#include "CoreMinimal.h"
#include "MaterialProxySettings.h"
#include "LevelSimplificationDetails.generated.h"

USTRUCT()
struct ENGINE_API FLevelSimplificationDetails {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bCreatePackagePerAsset;
    
    UPROPERTY(EditAnywhere)
    float DetailsPercentage;
    
    UPROPERTY(EditAnywhere)
    FMaterialProxySettings StaticMeshMaterialSettings;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLandscapeExportLOD;
    
    UPROPERTY(EditAnywhere)
    int32 LandscapeExportLOD;
    
    UPROPERTY(EditAnywhere)
    FMaterialProxySettings LandscapeMaterialSettings;
    
    UPROPERTY(EditAnywhere)
    bool bBakeFoliageToLandscape;
    
    UPROPERTY(EditAnywhere)
    bool bBakeGrassToLandscape;
    
    UPROPERTY()
    bool bGenerateMeshNormalMap;
    
    UPROPERTY()
    bool bGenerateMeshMetallicMap;
    
    UPROPERTY()
    bool bGenerateMeshRoughnessMap;
    
    UPROPERTY()
    bool bGenerateMeshSpecularMap;
    
    UPROPERTY()
    bool bGenerateLandscapeNormalMap;
    
    UPROPERTY()
    bool bGenerateLandscapeMetallicMap;
    
    UPROPERTY()
    bool bGenerateLandscapeRoughnessMap;
    
    UPROPERTY()
    bool bGenerateLandscapeSpecularMap;
    
    FLevelSimplificationDetails();
};

