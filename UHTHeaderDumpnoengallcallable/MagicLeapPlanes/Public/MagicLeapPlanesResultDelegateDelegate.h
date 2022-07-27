#pragma once
#include "CoreMinimal.h"
#include "MagicLeapPlaneResult.h"
#include "MagicLeapPlaneBoundaries.h"
#include "MagicLeapPlanesResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FMagicLeapPlanesResultDelegate, const bool, bSuccess, const TArray<FMagicLeapPlaneResult>&, Planes, const TArray<FMagicLeapPlaneBoundaries>&, Polygons);

