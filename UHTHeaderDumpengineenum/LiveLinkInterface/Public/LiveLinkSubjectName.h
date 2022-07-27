#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSubjectName.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSubjectName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    LIVELINKINTERFACE_API FLiveLinkSubjectName();
};

