#ifndef UE4SS_SDK_RawInput_HPP
#define UE4SS_SDK_RawInput_HPP

struct FRegisteredDeviceInfo
{
    int32 Handle;                                                                     // 0x0000 (size: 0x4)
    int32 VendorID;                                                                   // 0x0004 (size: 0x4)
    int32 ProductID;                                                                  // 0x0008 (size: 0x4)
    FString DeviceName;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
}; // Size: 0x28

struct FRawInputDeviceAxisProperties
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    FKey Key;                                                                         // 0x0008 (size: 0x18)
    uint8 bInverted;                                                                  // 0x0020 (size: 0x1)
    uint8 bGamepadStick;                                                              // 0x0020 (size: 0x1)
    float Offset;                                                                     // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRawInputDeviceButtonProperties
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    FKey Key;                                                                         // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FRawInputDeviceConfiguration
{
    FString VendorID;                                                                 // 0x0000 (size: 0x10)
    FString ProductID;                                                                // 0x0010 (size: 0x10)
    TArray<FRawInputDeviceAxisProperties> AxisProperties;                             // 0x0020 (size: 0x10)
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;                         // 0x0030 (size: 0x10)

}; // Size: 0x40

class URawInputSettings : public UDeveloperSettings
{
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;                        // 0x0038 (size: 0x10)
    bool bRegisterDefaultDevice;                                                      // 0x0048 (size: 0x1)

}; // Size: 0x50

#endif
