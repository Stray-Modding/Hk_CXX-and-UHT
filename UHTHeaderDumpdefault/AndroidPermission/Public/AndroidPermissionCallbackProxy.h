#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AndroidPermissionDynamicDelegateDelegate.h"
#include "AndroidPermissionCallbackProxy.generated.h"

UCLASS()
class ANDROIDPERMISSION_API UAndroidPermissionCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAndroidPermissionDynamicDelegate OnPermissionsGrantedDynamicDelegate;
    
    UAndroidPermissionCallbackProxy();
};

