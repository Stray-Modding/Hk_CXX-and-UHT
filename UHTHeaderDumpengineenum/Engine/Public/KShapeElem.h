#pragma once
#include "CoreMinimal.h"
#include "ECollisionEnabled.h"
#include "KShapeElem.generated.h"

USTRUCT()
struct FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RestOffset;
    
private:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    uint8 bContributeToMass: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
public:
    ENGINE_API FKShapeElem();
};

