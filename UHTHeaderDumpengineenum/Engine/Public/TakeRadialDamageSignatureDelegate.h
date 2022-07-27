#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HitResult.h"
#include "TakeRadialDamageSignatureDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SevenParams(FTakeRadialDamageSignature, AActor*, DamagedActor, float, Damage, const UDamageType*, DamageType, FVector, Origin, FHitResult, HitInfo, AController*, InstigatedBy, AActor*, DamageCauser);

