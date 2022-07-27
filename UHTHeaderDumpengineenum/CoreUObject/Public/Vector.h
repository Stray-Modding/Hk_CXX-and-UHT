#pragma once
#include "CoreMinimal.h"
#include "Vector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Z;
    
    COREUOBJECT_API FVector();
};

