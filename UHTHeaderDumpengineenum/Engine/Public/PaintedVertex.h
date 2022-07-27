#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "PaintedVertex.generated.h"

USTRUCT(BlueprintType)
struct FPaintedVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    FColor Color;
    
    UPROPERTY()
    FVector4 Normal;
    
    ENGINE_API FPaintedVertex();
};

