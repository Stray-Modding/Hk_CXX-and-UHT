#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ZurgInterestPointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgInterestPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UZurgInterestPointComponent();
};

