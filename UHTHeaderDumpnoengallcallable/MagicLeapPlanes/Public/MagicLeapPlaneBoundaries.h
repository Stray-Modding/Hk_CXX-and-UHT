#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapPlaneBoundary.h"
#include "MagicLeapPlaneBoundaries.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPPLANES_API FMagicLeapPlaneBoundaries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagicLeapPlaneBoundary> Boundaries;
    
    FMagicLeapPlaneBoundaries();
};

