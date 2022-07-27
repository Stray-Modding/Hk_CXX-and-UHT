#pragma once
#include "CoreMinimal.h"
#include "GameplayTaskSpawnActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayTaskSpawnActorDelegate, AActor*, SpawnedActor);

