#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FoliageTypeObject.h"
#include "ProceduralFoliageSpawner.generated.h"

UCLASS(BlueprintType)
class FOLIAGE_API UProceduralFoliageSpawner : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TileSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumUniqueTiles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumQuadTreeSize;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FFoliageTypeObject> FoliageTypes;
    
public:
    UProceduralFoliageSpawner();
    UFUNCTION(BlueprintCallable)
    void Simulate(int32 NumSteps);
    
};

