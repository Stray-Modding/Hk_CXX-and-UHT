#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinSaveGame.generated.h"

UCLASS()
class MAGICLEAPARPIN_API UMagicLeapARPinSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGuid PinnedID;
    
    UPROPERTY(VisibleAnywhere)
    FTransform ComponentWorldTransform;
    
    UPROPERTY(VisibleAnywhere)
    FTransform PinTransform;
    
    UPROPERTY(VisibleAnywhere)
    bool bShouldPinActor;
    
    UMagicLeapARPinSaveGame();
};

