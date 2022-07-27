#pragma once
#include "CoreMinimal.h"
#include "EEndPlayReason.h"
#include "ActorEndPlaySignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorEndPlaySignature, AActor*, Actor, TEnumAsByte<EEndPlayReason::Type>, EndPlayReason);

