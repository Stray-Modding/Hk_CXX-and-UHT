#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSubjectName.h"
#include "LiveLinkSubjectRepresentation.generated.h"

class ULiveLinkRole;

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkSubjectRepresentation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkSubjectName Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULiveLinkRole> Role;
    
    FLiveLinkSubjectRepresentation();
};

