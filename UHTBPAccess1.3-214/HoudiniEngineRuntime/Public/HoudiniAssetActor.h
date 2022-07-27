#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHoudiniAssetComponent* HoudiniAssetComponent;
    
    AHoudiniAssetActor();
};

