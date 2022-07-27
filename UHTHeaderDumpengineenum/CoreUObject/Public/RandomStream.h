#pragma once
#include "CoreMinimal.h"
#include "RandomStream.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FRandomStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 InitialSeed;
    
    UPROPERTY()
    int32 Seed;
    
    COREUOBJECT_API FRandomStream();
};

