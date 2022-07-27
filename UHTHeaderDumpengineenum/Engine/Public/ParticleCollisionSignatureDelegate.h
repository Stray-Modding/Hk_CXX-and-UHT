#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleCollisionSignatureDelegate.generated.h"

class UPhysicalMaterial;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_NineParams(FParticleCollisionSignature, FName, EventName, float, EmitterTime, int32, ParticleTime, FVector, Location, FVector, Velocity, FVector, Direction, FVector, Normal, FName, BoneName, UPhysicalMaterial*, PhysMat);

