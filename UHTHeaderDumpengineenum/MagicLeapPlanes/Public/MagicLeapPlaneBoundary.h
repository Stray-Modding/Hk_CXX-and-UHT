#pragma once
#include "CoreMinimal.h"
#include "MagicLeapPolygon.h"
#include "MagicLeapPlaneBoundary.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPPLANES_API FMagicLeapPlaneBoundary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMagicLeapPolygon Polygon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMagicLeapPolygon> Holes;
    
    FMagicLeapPlaneBoundary();
};

