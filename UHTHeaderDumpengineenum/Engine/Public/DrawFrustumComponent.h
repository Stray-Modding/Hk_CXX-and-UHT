#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "DrawFrustumComponent.generated.h"

class UTexture;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawFrustumComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor FrustumColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrustumAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrustumAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrustumStartDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrustumEndDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Texture;
    
    UDrawFrustumComponent();
};

