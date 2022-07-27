#pragma once
#include "CoreMinimal.h"
#include "ComponentCollisionSettingsChangedSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FComponentCollisionSettingsChangedSignature, UPrimitiveComponent*, ChangedComponent);

