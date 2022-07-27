#pragma once
#include "CoreMinimal.h"
#include "ActorBeginCursorOverSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorBeginCursorOverSignature, AActor*, TouchedActor);

