#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "KSphylElem.generated.h"

USTRUCT(BlueprintType)
struct FKSphylElem : public FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    ENGINE_API FKSphylElem();
};

