#pragma once
#include "CoreMinimal.h"
#include "IntVector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FIntVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Z;
    
    COREUOBJECT_API FIntVector();
};

