#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ViewportDisplayCallbackDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FViewportDisplayCallback, FText&, OutText, FLinearColor&, OutColor);

