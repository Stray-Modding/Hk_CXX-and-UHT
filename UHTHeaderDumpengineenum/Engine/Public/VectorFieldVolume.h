#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "VectorFieldVolume.generated.h"

class UVectorFieldComponent;

UCLASS(MinimalAPI)
class AVectorFieldVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVectorFieldComponent* VectorFieldComponent;
    
public:
    AVectorFieldVolume();
};

