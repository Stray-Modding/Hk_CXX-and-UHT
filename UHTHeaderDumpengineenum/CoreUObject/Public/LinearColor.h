#pragma once
#include "CoreMinimal.h"
#include "LinearColor.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float A;
    
    COREUOBJECT_API FLinearColor();
};

