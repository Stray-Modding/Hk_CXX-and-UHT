#pragma once
#include "CoreMinimal.h"
#include "OnSystemFinishedDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSystemFinished, UParticleSystemComponent*, PSystem);

