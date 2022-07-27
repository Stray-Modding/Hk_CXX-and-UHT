#pragma once
#include "CoreMinimal.h"
#include "Guid.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FGuid {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    int32 A;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 B;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 C;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 D;
    
    COREUOBJECT_API FGuid();
};

