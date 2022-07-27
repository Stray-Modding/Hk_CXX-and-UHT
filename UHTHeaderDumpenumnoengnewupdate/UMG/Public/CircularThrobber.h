#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CircularThrobber.generated.h"

class USlateBrushAsset;

UCLASS()
class UMG_API UCircularThrobber : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfPieces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Period;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY()
    USlateBrushAsset* PieceImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Image;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    bool bEnableRadius;
    
public:
    UCircularThrobber();
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetPeriod(float InPeriod);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfPieces(int32 InNumberOfPieces);
    
};

