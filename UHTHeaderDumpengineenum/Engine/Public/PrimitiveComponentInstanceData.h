#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PrimitiveComponentInstanceData.generated.h"

class UPrimitiveComponent;

USTRUCT()
struct ENGINE_API FPrimitiveComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTransform ComponentTransform;
    
    UPROPERTY()
    int32 VisibilityId;
    
    UPROPERTY(Export)
    UPrimitiveComponent* LODParent;
    
public:
    FPrimitiveComponentInstanceData();
};

