#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FractureMaterial.generated.h"

USTRUCT(BlueprintType)
struct FFractureMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D UVScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D UVOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Tangent;
    
    UPROPERTY(EditAnywhere)
    float UAngle;
    
    UPROPERTY(EditAnywhere)
    int32 InteriorElementIndex;
    
    APEXDESTRUCTION_API FFractureMaterial();
};

