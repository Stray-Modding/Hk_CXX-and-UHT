#pragma once
#include "CoreMinimal.h"
#include "ActorComponentActivatedSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorComponentActivatedSignature, UActorComponent*, Component, bool, bReset);

