#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkSubjectName.h"
#include "LiveLinkSubjectKey.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkSubjectKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid Source;
    
    UPROPERTY(BlueprintReadOnly)
    FLiveLinkSubjectName SubjectName;
    
    FLiveLinkSubjectKey();
};

