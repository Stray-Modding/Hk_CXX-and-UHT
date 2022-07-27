#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "MagicLeapARPinObjectIdList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinContentBindings.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPARPIN_API UMagicLeapARPinContentBindings : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings;
    
    UMagicLeapARPinContentBindings();
};

