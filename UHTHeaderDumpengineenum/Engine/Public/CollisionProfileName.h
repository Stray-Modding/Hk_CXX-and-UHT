#pragma once
#include "CoreMinimal.h"
#include "CollisionProfileName.generated.h"

USTRUCT(BlueprintType)
struct FCollisionProfileName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    ENGINE_API FCollisionProfileName();
};

