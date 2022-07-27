#pragma once
#include "CoreMinimal.h"
#include "Vector2D.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Y;
    
    COREUOBJECT_API FVector2D();
};

