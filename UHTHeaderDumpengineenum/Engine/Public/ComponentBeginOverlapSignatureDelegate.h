#pragma once
#include "CoreMinimal.h"
#include "HitResult.h"
#include "ComponentBeginOverlapSignatureDelegate.generated.h"

class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SixParams(FComponentBeginOverlapSignature, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);

