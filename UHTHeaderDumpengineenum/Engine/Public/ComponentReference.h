#pragma once
#include "CoreMinimal.h"
#include "ComponentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    AActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentProperty;
    
    UPROPERTY()
    FString PathToComponent;
    
    FComponentReference();
};

