#pragma once
#include "CoreMinimal.h"
#include "MaterialSpriteElement.generated.h"

class UMaterialInterface;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FMaterialSpriteElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DistanceToOpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSizeIsInScreenSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DistanceToSizeCurve;
    
    ENGINE_API FMaterialSpriteElement();
};

