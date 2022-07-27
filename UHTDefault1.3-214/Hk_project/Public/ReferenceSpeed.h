#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ReferenceSpeed.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FReferenceSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName SpeedName;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform BeginMotion;
    
    HK_PROJECT_API FReferenceSpeed();
};

