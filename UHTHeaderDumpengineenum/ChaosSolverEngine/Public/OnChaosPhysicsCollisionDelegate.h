#pragma once
#include "CoreMinimal.h"
#include "ChaosPhysicsCollisionInfo.h"
#include "OnChaosPhysicsCollisionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChaosPhysicsCollision, const FChaosPhysicsCollisionInfo&, CollisionInfo);

