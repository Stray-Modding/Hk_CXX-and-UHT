#pragma once
#include "CoreMinimal.h"
#include "OnRequestContentFailedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestContentFailed, FText, ErrorText, int32, ErrorCode);

