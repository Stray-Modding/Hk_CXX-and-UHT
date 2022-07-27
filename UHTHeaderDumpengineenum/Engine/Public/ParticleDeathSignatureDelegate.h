#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleDeathSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FParticleDeathSignature, FName, EventName, float, EmitterTime, int32, ParticleTime, FVector, Location, FVector, Velocity, FVector, Direction);

