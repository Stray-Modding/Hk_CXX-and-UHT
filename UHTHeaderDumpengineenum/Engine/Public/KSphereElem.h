#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "KSphereElem.generated.h"

USTRUCT(BlueprintType)
struct FKSphereElem : public FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    ENGINE_API FKSphereElem();
};

