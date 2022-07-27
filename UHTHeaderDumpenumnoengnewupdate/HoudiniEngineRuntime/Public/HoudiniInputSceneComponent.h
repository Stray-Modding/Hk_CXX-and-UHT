#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniInputSceneComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSceneComponent : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform ActorTransform;
    
    UHoudiniInputSceneComponent();
};

