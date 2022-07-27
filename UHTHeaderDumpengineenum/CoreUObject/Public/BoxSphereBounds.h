#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "BoxSphereBounds.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FBoxSphereBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float SphereRadius;
    
    COREUOBJECT_API FBoxSphereBounds();
};

