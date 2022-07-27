#pragma once
#include "CoreMinimal.h"
#include "SphereComponent.h"
#include "DrawSphereComponent.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UDrawSphereComponent();
};

