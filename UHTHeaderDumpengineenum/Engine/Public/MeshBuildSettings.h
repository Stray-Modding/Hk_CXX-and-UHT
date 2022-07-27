#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MeshBuildSettings.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseMikkTSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRecomputeNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRecomputeTangents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bComputeWeightedNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRemoveDegenerates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBuildAdjacencyBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBuildReversedIndexBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseFullPrecisionUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateLightmapUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateDistanceFieldAsIfTwoSided: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSupportFaceRemap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SrcLightmapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DstLightmapIndex;
    
    UPROPERTY()
    float BuildScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BuildScale3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFieldResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* DistanceFieldReplacementMesh;
    
    ENGINE_API FMeshBuildSettings();
};

