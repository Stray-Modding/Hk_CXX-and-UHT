#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "DebugTextInfo.generated.h"

class AActor;
class UFont;

USTRUCT(BlueprintType)
struct FDebugTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SrcActor;
    
    UPROPERTY()
    FVector SrcActorOffset;
    
    UPROPERTY()
    FVector SrcActorDesiredOffset;
    
    UPROPERTY()
    FString DebugText;
    
    UPROPERTY(Transient)
    float TimeRemaining;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    FColor TextColor;
    
    UPROPERTY()
    uint8 bAbsoluteLocation: 1;
    
    UPROPERTY()
    uint8 bKeepAttachedToActor: 1;
    
    UPROPERTY()
    uint8 bDrawShadow: 1;
    
    UPROPERTY()
    FVector OrigActorLocation;
    
    UPROPERTY()
    UFont* Font;
    
    UPROPERTY()
    float FontScale;
    
    ENGINE_API FDebugTextInfo();
};

