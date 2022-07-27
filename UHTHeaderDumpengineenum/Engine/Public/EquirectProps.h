#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EquirectProps.generated.h"

USTRUCT(BlueprintType)
struct FEquirectProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FBox2D LeftUVRect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FBox2D RightUVRect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector2D LeftScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector2D RightScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector2D LeftBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector2D RightBias;
    
    ENGINE_API FEquirectProps();
};

