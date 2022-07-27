#pragma once
#include "CoreMinimal.h"
#include "ActorDestroyedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorDestroyedSignature, AActor*, DestroyedActor);

