#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMagicLeapPlaneQueryType.h"
#include "MagicLeapPlaneResult.h"
#include "MagicLeapPlaneBoundaries.h"
#include "MagicLeapPersistentPlanesResultDelegateMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FMagicLeapPersistentPlanesResultDelegateMulti, const bool, bSuccess, const FGuid&, QueryHandle, const EMagicLeapPlaneQueryType, QueryType, const TArray<FMagicLeapPlaneResult>&, NewPlanes, const TArray<FGuid>&, RemovedPlaneIDs, const TArray<FMagicLeapPlaneBoundaries>&, NewPolygons, const TArray<FGuid>&, RemovedPolygonIDs);

