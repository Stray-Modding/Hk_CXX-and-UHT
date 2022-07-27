#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ScreenMessageString.generated.h"

USTRUCT()
struct FScreenMessageString {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint64 Key;
    
    UPROPERTY(Transient)
    FString ScreenMessage;
    
    UPROPERTY(Transient)
    FColor DisplayColor;
    
    UPROPERTY(Transient)
    float TimeToDisplay;
    
    UPROPERTY(Transient)
    float CurrentTimeDisplayed;
    
    UPROPERTY(Transient)
    FVector2D TextScale;
    
    ENGINE_API FScreenMessageString();
};

