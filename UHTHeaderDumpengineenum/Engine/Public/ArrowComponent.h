#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ArrowComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UArrowComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor ArrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArrowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArrowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsScreenSizeScaled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bTreatAsASprite: 1;
    
    UArrowComponent();
    UFUNCTION(BlueprintCallable)
    void SetArrowColor(FLinearColor NewColor);
    
};

