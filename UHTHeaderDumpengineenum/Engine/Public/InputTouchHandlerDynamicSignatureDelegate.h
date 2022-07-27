#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InputTouchHandlerDynamicSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FInputTouchHandlerDynamicSignature, TEnumAsByte<ETouchIndex::Type>, FingerIndex, FVector, Location);

