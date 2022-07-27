#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ProceduralFoliageInstance.generated.h"

class UFoliageType;

USTRUCT(BlueprintType)
struct FOLIAGE_API FProceduralFoliageInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Age;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    UFoliageType* Type;
    
    FProceduralFoliageInstance();
};

