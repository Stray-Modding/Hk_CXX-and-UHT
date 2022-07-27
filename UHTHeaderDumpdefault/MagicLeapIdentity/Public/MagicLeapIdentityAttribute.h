#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapIdentityKey.h"
#include "MagicLeapIdentityAttribute.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapIdentityAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapIdentityKey Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    MAGICLEAPIDENTITY_API FMagicLeapIdentityAttribute();
};

