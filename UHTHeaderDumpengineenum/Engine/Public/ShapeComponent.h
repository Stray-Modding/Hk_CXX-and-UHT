#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ShapeComponent.generated.h"

class UBodySetup;
class UNavAreaBase;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UShapeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* ShapeBodySetup;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavAreaBase> AreaClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor ShapeColor;
    
    UPROPERTY()
    uint8 bDrawOnlyIfSelected: 1;
    
    UPROPERTY()
    uint8 bShouldCollideWhenPlacing: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDynamicObstacle: 1;
    
    UShapeComponent();
};

