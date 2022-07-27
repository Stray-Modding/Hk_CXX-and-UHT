#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTickSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLiveLinkTickSignature, float, DeltaTime);

