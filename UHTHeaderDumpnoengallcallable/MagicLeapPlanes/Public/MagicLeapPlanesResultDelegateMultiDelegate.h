#pragma once
#include "CoreMinimal.h"
#include "MagicLeapPlaneResult.h"
#include "MagicLeapPlaneBoundaries.h"
#include "MagicLeapPlanesResultDelegateMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMagicLeapPlanesResultDelegateMulti, const bool, bSuccess, const TArray<FMagicLeapPlaneResult>&, Planes, const TArray<FMagicLeapPlaneBoundaries>&, Polygons);

