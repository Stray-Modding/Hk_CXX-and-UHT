#pragma once
#include "CoreMinimal.h"
#include "NoiseEvent.generated.h"

class UNoisableComponent;
class AActor;

USTRUCT(BlueprintType)
struct FNoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Emitter;
    
    UPROPERTY(Export)
    UNoisableComponent* noisable;
    
    HK_PROJECT_API FNoiseEvent();
};

