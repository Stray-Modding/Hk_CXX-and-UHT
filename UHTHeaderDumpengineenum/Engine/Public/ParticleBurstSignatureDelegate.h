#pragma once
#include "CoreMinimal.h"
#include "ParticleBurstSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FParticleBurstSignature, FName, EventName, float, EmitterTime, int32, ParticleCount);

