#ifndef UE4SS_SDK_DIAL_BarSleeper_HPP
#define UE4SS_SDK_DIAL_BarSleeper_HPP

class ADIAL_BarSleeper_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_BarSleeper(int32 EntryPoint);
}; // Size: 0x350

#endif
