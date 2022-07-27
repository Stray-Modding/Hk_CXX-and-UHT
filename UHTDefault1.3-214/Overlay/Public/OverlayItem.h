#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "OverlayItem.generated.h"

USTRUCT(BlueprintType)
struct OVERLAY_API FOverlayItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Position;
    
    FOverlayItem();
};

