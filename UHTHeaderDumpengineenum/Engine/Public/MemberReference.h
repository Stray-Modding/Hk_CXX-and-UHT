#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MemberReference.generated.h"

class UObject;

USTRUCT()
struct FMemberReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UObject* MemberParent;
    
    UPROPERTY()
    FString MemberScope;
    
    UPROPERTY()
    FName MemberName;
    
    UPROPERTY()
    FGuid MemberGuid;
    
    UPROPERTY()
    bool bSelfContext;
    
    UPROPERTY()
    bool bWasDeprecated;
    
public:
    ENGINE_API FMemberReference();
};

