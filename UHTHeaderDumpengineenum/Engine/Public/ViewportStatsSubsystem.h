#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ViewportDisplayCallbackDelegate.h"
#include "ViewportStatsSubsystem.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UViewportStatsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UViewportStatsSubsystem();
    UFUNCTION(BlueprintCallable)
    void RemoveDisplayDelegate(const int32 IndexToRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedDisplay(FText Text, FLinearColor Color, float Duration);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDisplayDelegate(const FViewportDisplayCallback& Delegate);
    
};

