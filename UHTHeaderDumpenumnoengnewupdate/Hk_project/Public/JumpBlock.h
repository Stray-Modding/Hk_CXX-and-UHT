#pragma once
#include "CoreMinimal.h"
#include "JumpAnimationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "JumpBlock.generated.h"

USTRUCT(BlueprintType)
struct FJumpBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FJumpAnimationData Data;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D Trajectory;
    
    UPROPERTY(BlueprintReadWrite)
    FName SpeedName;
    
    UPROPERTY(BlueprintReadWrite)
    float BeginTime;
    
    UPROPERTY(BlueprintReadWrite)
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform BeginMotion;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform EndMotion;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasEnablePlayerControlNotify;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasExitJumpNotify;
    
    HK_PROJECT_API FJumpBlock();
};

