#pragma once
#include "CoreMinimal.h"
#include "AppleImageUtilsImageConversionResult.h"
#include "AppleImageConversionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAppleImageConversionDelegate, const FAppleImageUtilsImageConversionResult&, ConversionResult);

