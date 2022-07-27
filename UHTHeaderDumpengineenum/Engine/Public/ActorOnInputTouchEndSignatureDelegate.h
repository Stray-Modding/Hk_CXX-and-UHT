#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
#include "ActorOnInputTouchEndSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorOnInputTouchEndSignature, TEnumAsByte<ETouchIndex::Type>, FingerIndex, AActor*, TouchedActor);

