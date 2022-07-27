#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinUpdatedMultiDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMagicLeapARPinUpdatedMultiDelegate, const TArray<FGuid>&, Added, const TArray<FGuid>&, Updated, const TArray<FGuid>&, Deleted);

