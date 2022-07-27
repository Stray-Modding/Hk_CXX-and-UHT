#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshTerminationCriterion.h"
#include "SkeletalMeshOptimizationImportance.h"
#include "SkeletalMeshOptimizationType.h"
#include "SkeletalMeshOptimizationSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshOptimizationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<SkeletalMeshTerminationCriterion> TerminationCriterion;
    
    UPROPERTY(EditAnywhere)
    float NumOfTrianglesPercentage;
    
    UPROPERTY(EditAnywhere)
    float NumOfVertPercentage;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxNumOfTriangles;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxNumOfVerts;
    
    UPROPERTY(EditAnywhere)
    float MaxDeviationPercentage;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<SkeletalMeshOptimizationType> ReductionMethod;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<SkeletalMeshOptimizationImportance> SilhouetteImportance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<SkeletalMeshOptimizationImportance> TextureImportance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<SkeletalMeshOptimizationImportance> ShadingImportance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<SkeletalMeshOptimizationImportance> SkinningImportance;
    
    UPROPERTY(EditAnywhere)
    uint8 bRemapMorphTargets: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRecalcNormals: 1;
    
    UPROPERTY(EditAnywhere)
    float WeldingThreshold;
    
    UPROPERTY(EditAnywhere)
    float NormalsThreshold;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBonesPerVertex;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnforceBoneBoundaries: 1;
    
    UPROPERTY(EditAnywhere)
    float VolumeImportance;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockEdges: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockColorBounaries: 1;
    
    UPROPERTY(EditAnywhere)
    int32 BaseLOD;
    
    ENGINE_API FSkeletalMeshOptimizationSettings();
};

