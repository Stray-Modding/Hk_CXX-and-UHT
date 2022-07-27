#pragma once
#include "CoreMinimal.h"
#include "ActorEndOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorEndOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

