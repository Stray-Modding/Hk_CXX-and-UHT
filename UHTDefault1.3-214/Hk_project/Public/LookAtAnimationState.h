#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LookAtAnimationState.generated.h"

USTRUCT(BlueprintType)
struct FLookAtAnimationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FRotator CurrentRotation;
    
    UPROPERTY(BlueprintReadWrite)
    bool Enable;
    
    HK_PROJECT_API FLookAtAnimationState();
};

