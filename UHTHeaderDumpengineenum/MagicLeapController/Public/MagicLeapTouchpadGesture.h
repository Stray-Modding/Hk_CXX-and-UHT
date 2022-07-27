#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapTouchpadGestureType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "EMagicLeapTouchpadGestureDirection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapTouchpadGesture.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPCONTROLLER_API FMagicLeapTouchpadGesture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EControllerHand Hand;
    
    UPROPERTY(BlueprintReadOnly)
    FName MotionSource;
    
    UPROPERTY(BlueprintReadOnly)
    EMagicLeapTouchpadGestureType Type;
    
    UPROPERTY(BlueprintReadOnly)
    EMagicLeapTouchpadGestureDirection Direction;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PositionAndForce;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly)
    float FingerGap;
    
    UPROPERTY(BlueprintReadOnly)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly)
    float Angle;
    
    FMagicLeapTouchpadGesture();
};

