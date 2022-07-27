#pragma once
#include "CoreMinimal.h"
#include "DistributionVector.h"
#include "EDistributionVectorLockFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DistributionVectorConstant.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorConstant : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Constant;
    
    UPROPERTY()
    uint8 bLockAxes: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    
    UDistributionVectorConstant();
};

