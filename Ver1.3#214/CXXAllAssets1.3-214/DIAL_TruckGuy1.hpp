#ifndef UE4SS_SDK_DIAL_TruckGuy1_HPP
#define UE4SS_SDK_DIAL_TruckGuy1_HPP

class ADIAL_TruckGuy1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_TruckGuy1(int32 EntryPoint);
}; // Size: 0x348

#endif
