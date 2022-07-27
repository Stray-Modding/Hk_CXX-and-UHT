#pragma once
#include "CoreMinimal.h"
#include "EUVOutput.h"
#include "MaterialProxySettings.h"
#include "EMeshLODSelectionType.h"
#include "MeshMergingSettings.generated.h"

USTRUCT(BlueprintType)
struct FMeshMergingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 TargetLightMapResolution;
    
    UPROPERTY(EditAnywhere)
    EUVOutput OutputUVs[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialProxySettings MaterialSettings;
    
    UPROPERTY(EditAnywhere)
    int32 GutterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpecificLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMeshLODSelectionType LODSelectionType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateLightMapUV: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bComputedLightMapResolution: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPivotPointAtZero: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMergePhysicsData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMergeMaterials: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCreateMergedMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBakeVertexDataToMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseVertexDataForBakingMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseTextureBinning: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReuseMeshLightmapUVs: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMergeEquivalentMaterials: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseLandscapeCulling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIncludeImposters: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowDistanceField: 1;
    
    ENGINE_API FMeshMergingSettings();
};

