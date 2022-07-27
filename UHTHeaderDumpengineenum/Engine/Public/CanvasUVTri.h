#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CanvasUVTri.generated.h"

USTRUCT(BlueprintType)
struct FCanvasUVTri {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D V0_Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D V0_UV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor V0_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D V1_Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D V1_UV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor V1_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D V2_Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D V2_UV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor V2_Color;
    
    ENGINE_API FCanvasUVTri();
};

