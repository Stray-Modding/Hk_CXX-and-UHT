#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkComponentSettings.generated.h"

class ULiveLinkRole;
class ULiveLinkControllerBase;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class LIVELINKCOMPONENTS_API ULiveLinkComponentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ULiveLinkRole>, TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole;
    
    ULiveLinkComponentSettings();
};

