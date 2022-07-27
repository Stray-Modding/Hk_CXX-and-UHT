#pragma once
#include "CoreMinimal.h"
#include "MagicLeapARPinObjectIdList.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPARPIN_API FMagicLeapARPinObjectIdList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> ObjectIdList;
    
    FMagicLeapARPinObjectIdList();
};

