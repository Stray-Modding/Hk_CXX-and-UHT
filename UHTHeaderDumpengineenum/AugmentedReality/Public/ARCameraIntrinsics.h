#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARCameraIntrinsics.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARCameraIntrinsics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FIntPoint ImageResolution;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D FocalLength;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D PrincipalPoint;
    
    FARCameraIntrinsics();
};

