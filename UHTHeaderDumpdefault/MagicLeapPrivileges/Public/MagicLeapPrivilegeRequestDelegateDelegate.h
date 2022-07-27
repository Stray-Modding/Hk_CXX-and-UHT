#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPrivilege.h"
#include "MagicLeapPrivilegeRequestDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FMagicLeapPrivilegeRequestDelegate, EMagicLeapPrivilege, RequestedPrivilege, bool, WasGranted);

