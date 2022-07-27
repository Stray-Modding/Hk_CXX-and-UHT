#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSubjectKey.h"
#include "LiveLinkSubjectPreset.generated.h"

class ULiveLinkRole;
class ULiveLinkSubjectSettings;
class ULiveLinkVirtualSubject;

USTRUCT(BlueprintType)
struct FLiveLinkSubjectPreset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FLiveLinkSubjectKey Key;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(VisibleAnywhere)
    ULiveLinkSubjectSettings* Settings;
    
    UPROPERTY(VisibleAnywhere)
    ULiveLinkVirtualSubject* VirtualSubject;
    
    UPROPERTY(VisibleAnywhere)
    bool bEnabled;
    
    LIVELINKINTERFACE_API FLiveLinkSubjectPreset();
};

