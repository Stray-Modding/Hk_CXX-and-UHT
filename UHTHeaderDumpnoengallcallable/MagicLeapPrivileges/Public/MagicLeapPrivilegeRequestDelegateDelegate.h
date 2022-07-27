#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPrivilege.h"
#include "MagicLeapPrivilegeRequestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FMagicLeapPrivilegeRequestDelegate, EMagicLeapPrivilege, RequestedPrivilege, bool, WasGranted);

