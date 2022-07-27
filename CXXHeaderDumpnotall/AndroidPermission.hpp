#ifndef UE4SS_SDK_AndroidPermission_HPP
#define UE4SS_SDK_AndroidPermission_HPP

class UAndroidPermissionCallbackProxy : public UObject
{
    FAndroidPermissionCallbackProxyOnPermissionsGrantedDynamicDelegate OnPermissionsGrantedDynamicDelegate;
    void AndroidPermissionDynamicDelegate(const TArray<FString>& Permissions, const TArray<bool>& GrantResults);

};

class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool CheckPermission(FString permission);
    class UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<FString>& Permissions);
};

#endif
