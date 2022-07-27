#pragma once
#include "CoreMinimal.h"
#include "ComponentEndCursorOverSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FComponentEndCursorOverSignature, UPrimitiveComponent*, TouchedComponent);

