#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "TouchInputControl.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTouchInputControl {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* Image1;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Image2;
    
    UPROPERTY(EditAnywhere)
    FVector2D Center;
    
    UPROPERTY(EditAnywhere)
    FVector2D VisualSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D ThumbSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D InteractionSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D InputScale;
    
    UPROPERTY(EditAnywhere)
    FKey MainInputKey;
    
    UPROPERTY(EditAnywhere)
    FKey AltInputKey;
    
    ENGINE_API FTouchInputControl();
};

