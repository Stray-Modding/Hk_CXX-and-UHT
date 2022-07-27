#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "GridSnappingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UGridSnappingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GridSize;
    
    UGridSnappingComponent();
};

