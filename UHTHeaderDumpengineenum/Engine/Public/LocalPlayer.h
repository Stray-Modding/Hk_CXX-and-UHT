#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAspectRatioAxisConstraint.h"
#include "Player.h"
#include "LocalPlayer.generated.h"

class UGameViewportClient;
class APlayerController;

UCLASS(NonTransient, Within=Engine)
class ENGINE_API ULocalPlayer : public UPlayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameViewportClient* ViewportClient;
    
    UPROPERTY(Config)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    
    UPROPERTY()
    TSubclassOf<APlayerController> PendingLevelPlayerControllerClass;
    
    UPROPERTY(Transient, VisibleAnywhere)
    uint8 bSentSplitJoin: 1;
    
private:
    UPROPERTY()
    int32 ControllerId;
    
public:
    ULocalPlayer();
};

