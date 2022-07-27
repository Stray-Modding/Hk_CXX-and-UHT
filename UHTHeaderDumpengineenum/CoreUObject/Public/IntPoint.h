#pragma once
#include "CoreMinimal.h"
#include "IntPoint.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FIntPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Y;
    
    COREUOBJECT_API FIntPoint();
};

