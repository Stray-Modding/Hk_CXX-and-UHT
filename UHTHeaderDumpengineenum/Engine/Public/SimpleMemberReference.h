#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SimpleMemberReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSimpleMemberReference {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* MemberParent;
    
    UPROPERTY()
    FName MemberName;
    
    UPROPERTY()
    FGuid MemberGuid;
    
    ENGINE_API FSimpleMemberReference();
};

