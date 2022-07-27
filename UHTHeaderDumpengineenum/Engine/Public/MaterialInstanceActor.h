#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "MaterialInstanceActor.generated.h"

UCLASS(MinimalAPI)
class AMaterialInstanceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> TargetActors;
    
    AMaterialInstanceActor();
};

