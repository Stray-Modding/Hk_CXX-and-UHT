#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinObjectIdList.h"
#include "MagicLeapARPinContentBindings.generated.h"

UCLASS()
class MAGICLEAPARPIN_API UMagicLeapARPinContentBindings : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings;
    
    UMagicLeapARPinContentBindings();
};

