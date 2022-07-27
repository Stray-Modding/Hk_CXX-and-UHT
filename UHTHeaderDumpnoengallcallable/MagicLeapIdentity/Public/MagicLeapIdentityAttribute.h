#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapIdentityKey.h"
#include "MagicLeapIdentityAttribute.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapIdentityAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapIdentityKey Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    MAGICLEAPIDENTITY_API FMagicLeapIdentityAttribute();
};

