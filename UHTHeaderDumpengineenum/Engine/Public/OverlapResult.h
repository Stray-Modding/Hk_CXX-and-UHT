#pragma once
#include "CoreMinimal.h"
#include "OverlapResult.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT()
struct ENGINE_API FOverlapResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY()
    uint8 bBlockingHit: 1;
    
    FOverlapResult();
};

