#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapContentBindingFoundMultiDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMagicLeapContentBindingFoundMultiDelegate, const FGuid&, PinId, const TSet<FString>&, PinnedObjectIds);

