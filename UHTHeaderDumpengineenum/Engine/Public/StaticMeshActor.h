#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "EComponentMobility.h"
#include "ENavDataGatheringMode.h"
#include "StaticMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class ENGINE_API AStaticMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bStaticMeshReplicateMovement;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ENavDataGatheringMode NavigationGeometryGatheringMode;
    
    AStaticMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    
};

