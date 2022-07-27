#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "ProceduralFoliageVolume.generated.h"

class UProceduralFoliageComponent;

UCLASS()
class FOLIAGE_API AProceduralFoliageVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProceduralFoliageComponent* ProceduralComponent;
    
    AProceduralFoliageVolume();
};

