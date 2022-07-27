#pragma once
#include "CoreMinimal.h"
#include "FloatingPawnMovement.h"
#include "SpectatorPawnMovement.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USpectatorPawnMovement : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bIgnoreTimeDilation: 1;
    
    USpectatorPawnMovement();
};

