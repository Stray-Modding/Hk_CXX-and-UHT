#pragma once
#include "CoreMinimal.h"
#include "Vector4.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float W;
    
    COREUOBJECT_API FVector4();
};

