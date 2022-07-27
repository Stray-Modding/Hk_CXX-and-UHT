#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "LevelScriptActor.generated.h"

UCLASS(NotPlaceable)
class ENGINE_API ALevelScriptActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint8 bInputEnabled: 1;
    
public:
    ALevelScriptActor();
    UFUNCTION(BlueprintImplementableEvent)
    void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEvent(FName EventName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void LevelReset();
    
};

