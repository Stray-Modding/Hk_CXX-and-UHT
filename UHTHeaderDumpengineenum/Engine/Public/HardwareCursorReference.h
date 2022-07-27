#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "HardwareCursorReference.generated.h"

USTRUCT(BlueprintType)
struct FHardwareCursorReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CursorPath;
    
    UPROPERTY(EditAnywhere)
    FVector2D HotSpot;
    
    ENGINE_API FHardwareCursorReference();
};

