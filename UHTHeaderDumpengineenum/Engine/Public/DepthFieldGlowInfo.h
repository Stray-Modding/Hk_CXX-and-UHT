#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DepthFieldGlowInfo.generated.h"

USTRUCT(BlueprintType)
struct FDepthFieldGlowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    uint8 bEnableGlow: 1;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor GlowColor;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D GlowOuterRadius;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D GlowInnerRadius;
    
    ENGINE_API FDepthFieldGlowInfo();
};

