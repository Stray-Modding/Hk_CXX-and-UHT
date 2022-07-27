#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshBuildSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRecomputeNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRecomputeTangents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseMikkTSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bComputeWeightedNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRemoveDegenerates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseFullPrecisionUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBuildAdjacencyBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdTangentNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MorphThresholdPosition;
    
    ENGINE_API FSkeletalMeshBuildSettings();
};

