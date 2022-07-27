#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "SlateBrushAsset.generated.h"

UCLASS(MinimalAPI)
class USlateBrushAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    USlateBrushAsset();
};

