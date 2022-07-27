#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "TwoVectors.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FTwoVectors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector v1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector v2;
    
    COREUOBJECT_API FTwoVectors();
};

