#pragma once
#include "CoreMinimal.h"
#include "ListView.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EListItemAlignment -FallbackName=EListItemAlignment
#include "TileView.generated.h"

UCLASS()
class UMG_API UTileView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float EntryHeight;
    
    UPROPERTY(EditAnywhere)
    float EntryWidth;
    
    UPROPERTY(EditAnywhere)
    EListItemAlignment TileAlignment;
    
    UPROPERTY(EditAnywhere)
    bool bWrapHorizontalNavigation;
    
public:
    UTileView();
    UFUNCTION(BlueprintCallable)
    void SetEntryWidth(float NewWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHeight(float NewHeight);
    
    UFUNCTION(BlueprintPure)
    float GetEntryWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetEntryHeight() const;
    
};

