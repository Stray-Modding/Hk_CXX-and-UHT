#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FMagicLeapARPinUpdatedDelegate, const TArray<FGuid>&, Added, const TArray<FGuid>&, Updated, const TArray<FGuid>&, Deleted);

