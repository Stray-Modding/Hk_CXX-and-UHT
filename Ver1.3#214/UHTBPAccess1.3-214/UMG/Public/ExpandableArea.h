#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "NamedSlotInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ExpandableAreaStyle -FallbackName=ExpandableAreaStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "OnExpandableAreaExpansionChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "ExpandableArea.generated.h"

UCLASS(Blueprintable)
class UMG_API UExpandableArea : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpandableAreaStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor BorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HeaderPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin AreaPadding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpandableAreaExpansionChanged OnExpansionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* HeaderContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* BodyContent;
    
public:
    UExpandableArea();
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded_Animated(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExpanded() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

