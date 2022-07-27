#pragma once
#include "CoreMinimal.h"
#include "ELandscapeCullingPrecision.h"
#include "MaterialProxySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EProxyNormalComputationMethod.h"
#include "MeshProxySettings.generated.h"

USTRUCT(BlueprintType)
struct FMeshProxySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScreenSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialProxySettings MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MergeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor UnresolvedGeometryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRayCastDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HardAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EProxyNormalComputationMethod::Type> NormalCalculationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ELandscapeCullingPrecision::Type> LandscapeCullingPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCalculateCorrectLODModel: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideVoxelSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideTransferDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseHardAngleThreshold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bComputeLightMapResolution: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRecalculateNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseLandscapeCulling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowAdjacency: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowDistanceField: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bReuseMeshLightmapUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCreateCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowVertexColors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateLightmapUVs: 1;
    
    ENGINE_API FMeshProxySettings();
};

