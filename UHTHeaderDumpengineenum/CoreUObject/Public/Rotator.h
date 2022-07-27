#pragma once
#include "CoreMinimal.h"
#include "Rotator.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Roll;
    
    COREUOBJECT_API FRotator();
};

