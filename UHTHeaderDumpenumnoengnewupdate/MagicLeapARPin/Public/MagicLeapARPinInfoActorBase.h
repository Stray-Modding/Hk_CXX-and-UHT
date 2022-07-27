#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinInfoActorBase.generated.h"

UCLASS(Abstract)
class MAGICLEAPARPIN_API AMagicLeapARPinInfoActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid PinId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bVisibilityOverride;
    
    AMagicLeapARPinInfoActorBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateARPinState();
    
};

