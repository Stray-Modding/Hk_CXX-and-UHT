#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
#include "ComponentEndTouchOverSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentEndTouchOverSignature, TEnumAsByte<ETouchIndex::Type>, FingerIndex, UPrimitiveComponent*, TouchedComponent);

