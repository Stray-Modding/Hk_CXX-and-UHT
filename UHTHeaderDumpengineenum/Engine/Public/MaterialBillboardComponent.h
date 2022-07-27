#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "MaterialSpriteElement.h"
#include "MaterialBillboardComponent.generated.h"

class UMaterialInterface;
class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UMaterialBillboardComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMaterialSpriteElement> Elements;
    
    UMaterialBillboardComponent();
    UFUNCTION(BlueprintCallable)
    void SetElements(const TArray<FMaterialSpriteElement>& NewElements);
    
    UFUNCTION(BlueprintCallable)
    void AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve);
    
};

