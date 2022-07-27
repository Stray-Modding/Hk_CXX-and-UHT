#ifndef UE4SS_SDK_Dial_BarComWithSewers_HPP
#define UE4SS_SDK_Dial_BarComWithSewers_HPP

class ADial_BarComWithSewers_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* Screen;                                                             // 0x0348 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0350 (size: 0x8)
    class AActor* DronePos_TV;                                                        // 0x0358 (size: 0x8)
    class AActor* DronePos_Momo;                                                      // 0x0360 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_BarComWithSewers(int32 EntryPoint);
}; // Size: 0x368

#endif
