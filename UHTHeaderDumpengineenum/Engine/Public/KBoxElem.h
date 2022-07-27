#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "KBoxElem.generated.h"

USTRUCT(BlueprintType)
struct FKBoxElem : public FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float X;
    
    UPROPERTY(EditAnywhere)
    float Y;
    
    UPROPERTY(EditAnywhere)
    float Z;
    
    ENGINE_API FKBoxElem();
};

