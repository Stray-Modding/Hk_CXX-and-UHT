#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "Widget.h"
#include "Image.generated.h"

class UObject;
class UTexture2DDynamic;
class UTexture2D;
class USlateTextureAtlasInterface;
class ISlateTextureAtlasInterface;
class UMaterialInterface;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

UCLASS()
class UMG_API UImage : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY()
    UWidget::FGetSlateBrush BrushDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ColorAndOpacityDelegate;
    
    UPROPERTY(EditAnywhere)
    bool bFlipForRightToLeftFlowDirection;
    
    UPROPERTY(EditAnywhere)
    UWidget::FOnPointerEvent OnMouseButtonDownEvent;
    
    UImage();
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushTintColor(FSlateColor TintColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushSize(FVector2D DesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushResourceObject(UObject* ResourceObject);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromSoftMaterial(TSoftObjectPtr<UMaterialInterface> SoftMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAtlasInterface(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
};

