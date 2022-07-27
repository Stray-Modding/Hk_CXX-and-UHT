#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHoudiniAssetComponent* HoudiniAssetComponent;
    
    AHoudiniAssetActor();
};

