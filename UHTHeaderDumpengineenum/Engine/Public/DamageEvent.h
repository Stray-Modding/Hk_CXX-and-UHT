#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageEvent.generated.h"

class UDamageType;

USTRUCT()
struct ENGINE_API FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UDamageType> DamageTypeClass;
    
    FDamageEvent();
};

