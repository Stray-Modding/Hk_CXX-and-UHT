#pragma once
#include "CoreMinimal.h"
#include "Plane.h"
#include "Matrix.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FMatrix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FPlane XPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FPlane YPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FPlane ZPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FPlane WPlane;
    
    COREUOBJECT_API FMatrix();
};

