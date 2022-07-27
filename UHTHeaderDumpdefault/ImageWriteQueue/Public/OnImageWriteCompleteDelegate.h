#pragma once
#include "CoreMinimal.h"
#include "OnImageWriteCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImageWriteComplete, bool, bSuccess);

