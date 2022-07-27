#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleTypeDataBase.h"
#include "ETrailsRenderAxisOption.h"
#include "ParticleModuleTypeDataRibbon.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MaxTessellationBetweenParticles;
    
    UPROPERTY(EditAnywhere)
    int32 SheetsPerTrail;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTrailCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxParticleInTrailCount;
    
    UPROPERTY(EditAnywhere)
    uint8 bDeadTrailsOnDeactivate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDeadTrailsOnSourceLoss: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClipSourceSegement: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnablePreviousTangentRecalculation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTangentRecalculationEveryFrame: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpawnInitialParticle: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETrailsRenderAxisOption> RenderAxis;
    
    UPROPERTY(EditAnywhere)
    float TangentSpawningScalar;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenderGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenderSpawnPoints: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenderTangents: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenderTessellation: 1;
    
    UPROPERTY(EditAnywhere)
    float TilingDistance;
    
    UPROPERTY(EditAnywhere)
    float DistanceTessellationStepSize;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableTangentDiffInterpScale: 1;
    
    UPROPERTY(EditAnywhere)
    float TangentTessellationScalar;
    
    UParticleModuleTypeDataRibbon();
};

