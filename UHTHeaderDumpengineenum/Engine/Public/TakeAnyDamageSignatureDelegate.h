#pragma once
#include "CoreMinimal.h"
#include "TakeAnyDamageSignatureDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams(FTakeAnyDamageSignature, AActor*, DamagedActor, float, Damage, const UDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

