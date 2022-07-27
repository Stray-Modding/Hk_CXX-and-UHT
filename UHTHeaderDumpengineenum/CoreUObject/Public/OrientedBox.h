#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "OrientedBox.generated.h"

USTRUCT(Atomic, Immutable, NoExport)
struct FOrientedBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FVector Center;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FVector AxisX;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FVector AxisY;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FVector AxisZ;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float ExtentX;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float ExtentY;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float ExtentZ;
    
    COREUOBJECT_API FOrientedBox();
};

