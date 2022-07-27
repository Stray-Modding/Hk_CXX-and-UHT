#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WrappedStringElement.generated.h"

USTRUCT()
struct FWrappedStringElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Value;
    
    UPROPERTY()
    FVector2D LineExtent;
    
    ENGINE_API FWrappedStringElement();
};

