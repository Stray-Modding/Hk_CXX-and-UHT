#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "LineBatchComponent.generated.h"

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULineBatchComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    ULineBatchComponent();
};

