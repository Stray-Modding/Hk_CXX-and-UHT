#pragma once
#include "CoreMinimal.h"
#include "DistributionVector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveTwoVectors -FallbackName=InterpCurveTwoVectors
#include "EDistributionVectorMirrorFlags.h"
#include "EDistributionVectorLockFlags.h"
#include "DistributionVectorUniformCurve.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorUniformCurve : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveTwoVectors ConstantCurve;
    
    UPROPERTY()
    uint8 bLockAxes1: 1;
    
    UPROPERTY()
    uint8 bLockAxes2: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes[2];
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[3];
    
    UPROPERTY(EditAnywhere)
    uint8 bUseExtremes: 1;
    
    UDistributionVectorUniformCurve();
};

