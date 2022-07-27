#pragma once
#include "CoreMinimal.h"
#include "EOptimizationType.h"
#include "StaticMeshOptimizationSettings.generated.h"

USTRUCT()
struct FStaticMeshOptimizationSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EOptimizationType> ReductionMethod;
    
    UPROPERTY()
    float NumOfTrianglesPercentage;
    
    UPROPERTY()
    float MaxDeviationPercentage;
    
    UPROPERTY()
    float WeldingThreshold;
    
    UPROPERTY()
    bool bRecalcNormals;
    
    UPROPERTY()
    float NormalsThreshold;
    
    UPROPERTY()
    uint8 SilhouetteImportance;
    
    UPROPERTY()
    uint8 TextureImportance;
    
    UPROPERTY()
    uint8 ShadingImportance;
    
    ENGINE_API FStaticMeshOptimizationSettings();
};

