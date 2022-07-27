#pragma once
#include "CoreMinimal.h"
#include "EDrawDebugItemType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "QueuedDrawDebugItem.generated.h"

USTRUCT()
struct FQueuedDrawDebugItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TEnumAsByte<EDrawDebugItemType::Type> ItemType;
    
    UPROPERTY(Transient)
    FVector StartLoc;
    
    UPROPERTY(Transient)
    FVector EndLoc;
    
    UPROPERTY(Transient)
    FVector Center;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    float Radius;
    
    UPROPERTY(Transient)
    float Size;
    
    UPROPERTY(Transient)
    int32 Segments;
    
    UPROPERTY(Transient)
    FColor Color;
    
    UPROPERTY(Transient)
    bool bPersistentLines;
    
    UPROPERTY(Transient)
    float LifeTime;
    
    UPROPERTY(Transient)
    float Thickness;
    
    UPROPERTY(Transient)
    FString Message;
    
    UPROPERTY(Transient)
    FVector2D TextScale;
    
    ENGINE_API FQueuedDrawDebugItem();
};

