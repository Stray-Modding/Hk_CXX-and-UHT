#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Anchors.generated.h"

USTRUCT(BlueprintType)
struct FAnchors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Maximum;
    
    SLATE_API FAnchors();
};

