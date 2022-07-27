#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothCollisionPrim_Sphere.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_Sphere {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 BoneIndex;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    FVector LocalPosition;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Sphere();
};

