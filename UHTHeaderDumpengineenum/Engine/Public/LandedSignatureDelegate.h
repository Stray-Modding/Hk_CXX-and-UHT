#pragma once
#include "CoreMinimal.h"
#include "HitResult.h"
#include "LandedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLandedSignature, const FHitResult&, Hit);

