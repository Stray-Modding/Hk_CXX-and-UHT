#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMagicLeapPrivilege.h"
#include "MagicLeapPrivilegeRequestDelegateDelegate.h"
#include "MagicLeapPrivilegesFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPPRIVILEGES_API UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapPrivilegesFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const FMagicLeapPrivilegeRequestDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestPrivilege(EMagicLeapPrivilege Privilege);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPrivilege(EMagicLeapPrivilege Privilege);
    
};

