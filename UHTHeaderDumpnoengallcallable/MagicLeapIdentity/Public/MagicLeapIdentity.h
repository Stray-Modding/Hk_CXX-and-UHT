#pragma once
#include "CoreMinimal.h"
#include "MagicLeapIdentityAttribute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMagicLeapIdentityKey.h"
#include "EMagicLeapIdentityError.h"
#include "MagicLeapIdentity.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPIDENTITY_API UMagicLeapIdentity : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestIdentityAttributeValueDelegate, EMagicLeapIdentityError, ResultCode, const TArray<FMagicLeapIdentityAttribute>&, AttributeValue);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FModifyIdentityAttributeValueDelegate, EMagicLeapIdentityError, ResultCode, const TArray<EMagicLeapIdentityKey>&, AttributesUpdatedSuccessfully);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FAvailableIdentityAttributesDelegate, EMagicLeapIdentityError, ResultCode, const TArray<EMagicLeapIdentityKey>&, AvailableAttributes);
    
    UMagicLeapIdentity();
    UFUNCTION(BlueprintCallable)
    EMagicLeapIdentityError RequestAttributeValueAsync(const TArray<EMagicLeapIdentityKey>& RequestedAttributeList, const UMagicLeapIdentity::FRequestIdentityAttributeValueDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    EMagicLeapIdentityError RequestAttributeValue(const TArray<EMagicLeapIdentityKey>& RequestedAttributeList, TArray<FMagicLeapIdentityAttribute>& RequestedAttributeValues);
    
    UFUNCTION(BlueprintCallable)
    void GetAllAvailableAttributesAsync(const UMagicLeapIdentity::FAvailableIdentityAttributesDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    EMagicLeapIdentityError GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>& AvailableAttributes);
    
};

