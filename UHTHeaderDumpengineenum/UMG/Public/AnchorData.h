#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AnchorData.generated.h"

USTRUCT(BlueprintType)
struct FAnchorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Offsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchors Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Alignment;
    
    UMG_API FAnchorData();
};

