#pragma once
#include "CoreMinimal.h"
#include "DistributionVector.h"
#include "EDistributionVectorMirrorFlags.h"
#include "EDistributionVectorLockFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DistributionVectorUniform.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorUniform : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Max;
    
    UPROPERTY(EditAnywhere)
    FVector Min;
    
    UPROPERTY()
    uint8 bLockAxes: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[3];
    
    UPROPERTY(EditAnywhere)
    uint8 bUseExtremes: 1;
    
    UDistributionVectorUniform();
};

