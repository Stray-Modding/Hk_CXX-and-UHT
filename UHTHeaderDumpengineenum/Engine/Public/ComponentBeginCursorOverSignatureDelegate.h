#pragma once
#include "CoreMinimal.h"
#include "ComponentBeginCursorOverSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FComponentBeginCursorOverSignature, UPrimitiveComponent*, TouchedComponent);

