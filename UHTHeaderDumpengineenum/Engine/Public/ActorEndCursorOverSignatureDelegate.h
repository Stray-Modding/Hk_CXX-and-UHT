#pragma once
#include "CoreMinimal.h"
#include "ActorEndCursorOverSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorEndCursorOverSignature, AActor*, TouchedActor);

