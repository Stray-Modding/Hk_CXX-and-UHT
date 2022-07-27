#ifndef UE4SS_SDK_RawInput_HPP
#define UE4SS_SDK_RawInput_HPP

struct FRegisteredDeviceInfo
{
    int32 Handle;
    int32 VendorID;
    int32 ProductID;
    FString DeviceName;

};

class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
};

struct FRawInputDeviceAxisProperties
{
    uint8 bEnabled;
    FKey Key;
    uint8 bInverted;
    uint8 bGamepadStick;
    float Offset;

};

struct FRawInputDeviceButtonProperties
{
    uint8 bEnabled;
    FKey Key;

};

struct FRawInputDeviceConfiguration
{
    FString VendorID;
    FString ProductID;
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;

};

class URawInputSettings : public UDeveloperSettings
{
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;
    bool bRegisterDefaultDevice;

};

#endif
