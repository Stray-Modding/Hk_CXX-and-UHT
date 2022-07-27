#pragma once
#include "CoreMinimal.h"
#include "LocationServicesData.h"
#include "LocationServicesData_OnLocationChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocationServicesData_OnLocationChanged, FLocationServicesData, LocationData);

