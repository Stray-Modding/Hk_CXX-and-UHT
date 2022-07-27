#pragma once
#include "CoreMinimal.h"
#include "OnRequestContentSucceededDelegate.generated.h"

class UMobilePendingContent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRequestContentSucceeded, UMobilePendingContent*, MobilePendingContent);

