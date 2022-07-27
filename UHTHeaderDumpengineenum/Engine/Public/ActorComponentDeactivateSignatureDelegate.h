#pragma once
#include "CoreMinimal.h"
#include "ActorComponentDeactivateSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorComponentDeactivateSignature, UActorComponent*, Component);

