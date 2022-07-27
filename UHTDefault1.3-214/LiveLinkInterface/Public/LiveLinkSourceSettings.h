#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELiveLinkSourceMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSourceBufferManagementSettings.h"
#include "LiveLinkSourceSettings.generated.h"

class ULiveLinkSourceFactory;

UCLASS()
class LIVELINKINTERFACE_API ULiveLinkSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ELiveLinkSourceMode Mode;
    
    UPROPERTY(EditAnywhere)
    FLiveLinkSourceBufferManagementSettings BufferSettings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString ConnectionString;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TSubclassOf<ULiveLinkSourceFactory> Factory;
    
    ULiveLinkSourceSettings();
};

