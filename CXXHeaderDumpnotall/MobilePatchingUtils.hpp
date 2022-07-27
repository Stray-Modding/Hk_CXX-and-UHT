#ifndef UE4SS_SDK_MobilePatchingUtils_HPP
#define UE4SS_SDK_MobilePatchingUtils_HPP

class UMobileInstalledContent : public UObject
{

    bool Mount(int32 PakOrder, FString MountPoint);
    float GetInstalledContentSize();
    float GetDiskFreeSpace();
};

class UMobilePendingContent : public UMobileInstalledContent
{

    void StartInstall(FStartInstallOnSucceeded OnSucceeded, FStartInstallOnFailed OnFailed);
    float GetTotalDownloadedSize();
    float GetRequiredDiskSpace();
    float GetInstallProgress();
    FText GetDownloadStatusText();
    float GetDownloadSpeed();
    float GetDownloadSize();
};

class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{

    void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FRequestContentOnSucceeded OnSucceeded, FRequestContentOnFailed OnFailed);
    bool HasActiveWiFiConnection();
    TArray<FString> GetSupportedPlatformNames();
    class UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);
    FString GetActiveDeviceProfileName();
};

#endif
