#pragma once
#include "CoreMinimal.h"
#include "Color.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 A;
    
    COREUOBJECT_API FColor();
};

