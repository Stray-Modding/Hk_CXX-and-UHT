#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LevelBounds.generated.h"

class UBoxComponent;

UCLASS()
class ENGINE_API ALevelBounds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    bool bAutoUpdateBounds;
    
    ALevelBounds();
};

