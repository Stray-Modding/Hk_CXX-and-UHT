#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleTypeDataBase.h"
#include "EBeamTaperMethod.h"
#include "RawDistributionFloat.h"
#include "EBeam2Method.h"
#include "ParticleModuleTypeDataBeam2.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBeam2Method> BeamMethod;
    
    UPROPERTY(EditAnywhere)
    int32 TextureTile;
    
    UPROPERTY(EditAnywhere)
    float TextureTileDistance;
    
    UPROPERTY(EditAnywhere)
    int32 Sheets;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBeamCount;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    int32 InterpolationPoints;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlwaysOn: 1;
    
    UPROPERTY(EditAnywhere)
    int32 UpVectorStepSize;
    
    UPROPERTY(EditAnywhere)
    FName BranchParentName;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Distance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBeamTaperMethod> TaperMethod;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat TaperFactor;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat TaperScale;
    
    UPROPERTY(EditAnywhere)
    uint8 RenderGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 RenderDirectLine: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 RenderLines: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 RenderTessellation: 1;
    
    UParticleModuleTypeDataBeam2();
};

