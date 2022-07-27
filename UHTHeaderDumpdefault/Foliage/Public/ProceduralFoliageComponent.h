#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ProceduralFoliageComponent.generated.h"

class UProceduralFoliageSpawner;
class AVolume;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FOLIAGE_API UProceduralFoliageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UProceduralFoliageSpawner* FoliageSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TileOverlap;
    
private:
    UPROPERTY()
    AVolume* SpawningVolume;
    
    UPROPERTY()
    FGuid ProceduralGuid;
    
public:
    UProceduralFoliageComponent();
};

