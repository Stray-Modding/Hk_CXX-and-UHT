#pragma once
#include "CoreMinimal.h"
#include "MagicLeapPlaneBoundary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapPlaneBoundaries.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPPLANES_API FMagicLeapPlaneBoundaries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMagicLeapPlaneBoundary> Boundaries;
    
    FMagicLeapPlaneBoundaries();
};

