#pragma once
#include "CoreMinimal.h"
#include "DamageEvent.h"
#include "Vector_NetQuantizeNormal.h"
#include "HitResult.h"
#include "PointDamageEvent.generated.h"

USTRUCT()
struct ENGINE_API FPointDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Damage;
    
    UPROPERTY()
    FVector_NetQuantizeNormal ShotDirection;
    
    UPROPERTY()
    FHitResult HitInfo;
    
    FPointDamageEvent();
};

