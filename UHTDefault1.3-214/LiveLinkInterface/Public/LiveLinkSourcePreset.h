#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkSourcePreset.generated.h"

class ULiveLinkSourceSettings;

USTRUCT(BlueprintType)
struct FLiveLinkSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(VisibleAnywhere)
    ULiveLinkSourceSettings* Settings;
    
    UPROPERTY(VisibleAnywhere)
    FText SourceType;
    
    LIVELINKINTERFACE_API FLiveLinkSourcePreset();
};

