#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Widget.h"
#include "EDynamicBoxType.h"
#include "SlateChildSize.h"
#include "UserWidgetPool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "RadialBoxSettings.h"
#include "DynamicEntryBoxBase.generated.h"

class UUserWidget;

UCLASS(Abstract)
class UMG_API UDynamicEntryBoxBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EDynamicBoxType EntryBoxType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D EntrySpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector2D> SpacingPattern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize EntrySizeRule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxElementSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRadialBoxSettings RadialBoxSettings;
    
private:
    UPROPERTY(Transient)
    FUserWidgetPool EntryWidgetPool;
    
public:
    UDynamicEntryBoxBase();
    UFUNCTION(BlueprintCallable)
    void SetRadialSettings(const FRadialBoxSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEntrySpacing(const FVector2D& InEntrySpacing);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumEntries() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUserWidget*> GetAllEntries() const;
    
};

