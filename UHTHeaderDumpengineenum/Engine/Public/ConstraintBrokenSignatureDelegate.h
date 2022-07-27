#pragma once
#include "CoreMinimal.h"
#include "ConstraintBrokenSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConstraintBrokenSignature, int32, ConstraintIndex);

