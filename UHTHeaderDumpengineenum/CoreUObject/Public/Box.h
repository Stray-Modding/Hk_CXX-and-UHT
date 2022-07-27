#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "Box.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector Max;
    
    UPROPERTY()
    uint8 IsValid;
    
    COREUOBJECT_API FBox();
};

