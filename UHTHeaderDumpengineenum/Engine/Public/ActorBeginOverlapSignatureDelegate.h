#pragma once
#include "CoreMinimal.h"
#include "ActorBeginOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorBeginOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

