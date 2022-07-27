#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SplineMeshParams.generated.h"

USTRUCT(BlueprintType)
struct FSplineMeshParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector StartPos;
    
    UPROPERTY(EditAnywhere)
    FVector StartTangent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D StartScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float StartRoll;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D StartOffset;
    
    UPROPERTY(EditAnywhere)
    FVector EndPos;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D EndScale;
    
    UPROPERTY(EditAnywhere)
    FVector EndTangent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float EndRoll;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D EndOffset;
    
    ENGINE_API FSplineMeshParams();
};

