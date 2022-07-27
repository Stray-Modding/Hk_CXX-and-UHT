#pragma once
#include "CoreMinimal.h"
#include "EStaticMeshReductionTerimationCriterion.h"
#include "EMeshFeatureImportance.h"
#include "MeshReductionSettings.generated.h"

USTRUCT(BlueprintType)
struct FMeshReductionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PercentTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PercentVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PixelError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeldingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HardAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseLODModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMeshFeatureImportance::Type> SilhouetteImportance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMeshFeatureImportance::Type> TextureImportance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMeshFeatureImportance::Type> ShadingImportance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRecalculateNormals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateUniqueLightmapUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bKeepSymmetry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bVisibilityAided: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCullOccluded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStaticMeshReductionTerimationCriterion TerminationCriterion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMeshFeatureImportance::Type> VisibilityAggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMeshFeatureImportance::Type> VertexColorImportance;
    
    ENGINE_API FMeshReductionSettings();
};

