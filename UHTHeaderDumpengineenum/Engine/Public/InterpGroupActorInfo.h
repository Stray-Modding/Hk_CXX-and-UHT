#pragma once
#include "CoreMinimal.h"
#include "InterpGroupActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInterpGroupActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ObjectName;
    
    UPROPERTY(EditAnywhere)
    TArray<AActor*> Actors;
    
    ENGINE_API FInterpGroupActorInfo();
};

