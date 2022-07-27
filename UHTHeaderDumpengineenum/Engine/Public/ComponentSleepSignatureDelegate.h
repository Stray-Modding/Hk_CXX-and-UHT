#pragma once
#include "CoreMinimal.h"
#include "ComponentSleepSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentSleepSignature, UPrimitiveComponent*, SleepingComponent, FName, BoneName);

