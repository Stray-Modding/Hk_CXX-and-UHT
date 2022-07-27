#pragma once
#include "CoreMinimal.h"
#include "DamageEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RadialDamageParams.h"
#include "HitResult.h"
#include "RadialDamageEvent.generated.h"

USTRUCT()
struct ENGINE_API FRadialDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRadialDamageParams Params;
    
    UPROPERTY()
    FVector Origin;
    
    UPROPERTY()
    TArray<FHitResult> ComponentHits;
    
    FRadialDamageEvent();
};

