#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "KTaperedCapsuleElem.generated.h"

USTRUCT(BlueprintType)
struct FKTaperedCapsuleElem : public FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Radius0;
    
    UPROPERTY(EditAnywhere)
    float Radius1;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    ENGINE_API FKTaperedCapsuleElem();
};

