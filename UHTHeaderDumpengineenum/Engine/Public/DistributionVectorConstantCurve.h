#pragma once
#include "CoreMinimal.h"
#include "DistributionVector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "EDistributionVectorLockFlags.h"
#include "DistributionVectorConstantCurve.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorConstantCurve : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveVector ConstantCurve;
    
    UPROPERTY()
    uint8 bLockAxes: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    
    UDistributionVectorConstantCurve();
};

