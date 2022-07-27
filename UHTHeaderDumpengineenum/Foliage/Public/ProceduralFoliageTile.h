#pragma once
#include "CoreMinimal.h"
#include "ProceduralFoliageInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProceduralFoliageTile.generated.h"

class UProceduralFoliageSpawner;

UCLASS()
class FOLIAGE_API UProceduralFoliageTile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UProceduralFoliageSpawner* FoliageSpawner;
    
    UPROPERTY()
    TArray<FProceduralFoliageInstance> InstancesArray;
    
public:
    UProceduralFoliageTile();
};

