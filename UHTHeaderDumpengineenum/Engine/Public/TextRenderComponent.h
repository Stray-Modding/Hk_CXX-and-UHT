#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "EVerticalTextAligment.h"
#include "EHorizTextAligment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TextRenderComponent.generated.h"

class UMaterialInterface;
class UFont;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UTextRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* TextMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFont* Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizTextAligment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalTextAligment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor TextRenderColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float XScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WorldSize;
    
    UPROPERTY()
    float InvDefaultSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float HorizSpacingAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float VertSpacingAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAlwaysRenderAsText: 1;
    
    UTextRenderComponent();
    UFUNCTION(BlueprintCallable)
    void SetYScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetXScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVertSpacingAdjust(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextRenderColor(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizSpacingAdjust(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(UFont* Value);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetText(const FText& Value);
    
    UFUNCTION(BlueprintPure)
    FVector GetTextWorldSize() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTextLocalSize() const;
    
};

