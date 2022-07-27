#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSubjectKey.h"
#include "LiveLinkSubjectPreset.generated.h"

class ULiveLinkSubjectSettings;
class ULiveLinkRole;
class ULiveLinkVirtualSubject;

USTRUCT(BlueprintType)
struct FLiveLinkSubjectPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULiveLinkSubjectSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULiveLinkVirtualSubject* VirtualSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    LIVELINKINTERFACE_API FLiveLinkSubjectPreset();
};

