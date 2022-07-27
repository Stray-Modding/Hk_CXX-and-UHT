#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "BrushComponent.generated.h"

class UModel;
class UBodySetup;

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBrushComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    UModel* Brush;
    
    UPROPERTY()
    UBodySetup* BrushBodySetup;
    
    UBrushComponent();
};

