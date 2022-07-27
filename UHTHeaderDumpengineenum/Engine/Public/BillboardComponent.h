#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "BillboardComponent.generated.h"

class UTexture2D;

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UBillboardComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Sprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsScreenSizeScaled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float U;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VL;
    
    UBillboardComponent();
    UFUNCTION(BlueprintCallable)
    void SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
    
    UFUNCTION(BlueprintCallable)
    void SetSpriteAndUV(UTexture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
    
    UFUNCTION(BlueprintCallable)
    void SetSprite(UTexture2D* NewSprite);
    
};

