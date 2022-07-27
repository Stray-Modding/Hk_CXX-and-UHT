#pragma once
#include "CoreMinimal.h"
#include "MovementProperties.generated.h"

USTRUCT(BlueprintType)
struct FMovementProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanCrouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanWalk: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanSwim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanFly: 1;
    
    ENGINE_API FMovementProperties();
};

