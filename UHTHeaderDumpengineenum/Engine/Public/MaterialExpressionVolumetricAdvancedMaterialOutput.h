#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionVolumetricAdvancedMaterialOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionVolumetricAdvancedMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput PhaseG;
    
    UPROPERTY()
    FExpressionInput PhaseG2;
    
    UPROPERTY()
    FExpressionInput PhaseBlend;
    
    UPROPERTY()
    FExpressionInput MultiScatteringContribution;
    
    UPROPERTY()
    FExpressionInput MultiScatteringOcclusion;
    
    UPROPERTY()
    FExpressionInput MultiScatteringEccentricity;
    
    UPROPERTY()
    FExpressionInput ConservativeDensity;
    
    UPROPERTY(EditAnywhere)
    float ConstPhaseG;
    
    UPROPERTY(EditAnywhere)
    float ConstPhaseG2;
    
    UPROPERTY(EditAnywhere)
    float ConstPhaseBlend;
    
    UPROPERTY(EditAnywhere)
    bool PerSamplePhaseEvaluation;
    
    UPROPERTY(EditAnywhere)
    uint32 MultiScatteringApproximationOctaveCount;
    
    UPROPERTY(EditAnywhere)
    float ConstMultiScatteringContribution;
    
    UPROPERTY(EditAnywhere)
    float ConstMultiScatteringOcclusion;
    
    UPROPERTY(EditAnywhere)
    float ConstMultiScatteringEccentricity;
    
    UPROPERTY(EditAnywhere)
    bool bGroundContribution;
    
    UPROPERTY(EditAnywhere)
    bool bGrayScaleMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bRayMarchVolumeShadow;
    
    UMaterialExpressionVolumetricAdvancedMaterialOutput();
};

